#- Image is 8-bit (0-255) per channel.
#- Green channel encodes height: 
#    G = 255  -> height = 1.0, Depth = 0.0 (default surface, no carving)
#    G = 0    -> height = 0.0, Depth = 1.0 (deepest point, max carving depth)
#    Carving Power = Min_Power + Depth * (Max_Power - Min_Power)
#- Work area is square: WORK_AREA_SIDE_MM x WORK_AREA_SIDE_MM on the machine.
#- Z = 0 is the cube's top surface; negative Z means carving downwards.

from dataclasses import dataclass
from typing import List
import numpy as np
from PIL import Image

@dataclass
class EngravingSettings:
    work_area_side_mm: float   # length of the cube top surface (mm)
    max_depth_mm: float        # maximum carving depth (mm);
    safe_z_mm: float           # Z height for safe rapid moves (mm)
    rapid_rate_xy: float       # feed rate during rapid XY moves (mm/min)
    laser_min_feed_xy: float    # slowest speed for darkest pixels (mm/min)
    laser_max_feed_xy: float    # fastest speed for brightest pixels (mm/min)
    surface_z_mm: float = 0.0  # Z of the cube surface (default 0.0)
    laser_min_power: float = 0.0      # minimum laser power for brightest pixels
    laser_max_power: float = 1000.0      # maximum laser power for darkest pixels

# Image processing

def load_green_height_map(image_path):
    img = Image.open(image_path).convert("RGB")
    g_channel = np.array(img)[:, :, 1].astype(np.float32)
    height_map = g_channel / 255.0
    return height_map


def compute_depth_map_mm(height_map, max_depth_mm):
    depth_map = (1.0 - height_map) * max_depth_mm
    return depth_map

# G-code generate

def compute_pixel_size_mm(work_area_side_mm, image_size_px):
    if image_size_px <= 1:
        raise ValueError("Image size must be greater than 1 pixel.")
    return work_area_side_mm / float(image_size_px - 1)


def create_gcode_header(settings):
    lines = [
        "G21            ; units in mm",
        "G90            ; absolute positioning",
        "G17            ; XY plane selection",
        f"G0 Z{settings.safe_z_mm:.3f}   ; move to safe Z",
        "",
    ]
    return lines


def create_gcode_footer(settings):
    lines = [
        "",
        f"G0 Z{settings.safe_z_mm:.3f}   ; retract to safe Z",
        "G0 X0 Y0       ; go home",
        "M5             ; laser off",
        "M30            ; program end",
        "; --- End ---",
    ]
    return lines


def generate_raster_gcode(
    depth_map_mm,
    mm_per_pixel,
    settings,
) :
    h_px, w_px = depth_map_mm.shape

    lines: List[str] = []

    engrave_z = settings.surface_z_mm

    max_d = getattr(settings, "max_depth_mm", None)
    if max_d is None or max_d <= 0:
        max_d = 1.0  # fallback to avoid crash

    for y_pixel in range(0, h_px):
        # Serpentine scanning: even rows left->right, odd rows right->left
        if y_pixel % 2 == 0:
            x_pixel_range = range(0, w_px)
        else:
            x_pixel_range = range(w_px - 1, -1, -1)

        first_point_in_row = True

        for x_pixel in x_pixel_range:
            x_mm = x_pixel * mm_per_pixel
            y_mm = y_pixel * mm_per_pixel

            depth_mm = float(depth_map_mm[y_pixel, x_pixel])

            # depth_ratio: 0.0 (no depth) -> 1.0 (max depth)
            depth_ratio = depth_mm / max_d

            # Map depth_ratio to laser power: min_power + ratio*(max_power - min_power) -> min_power to max_power
            laser_power = settings.laser_min_power + depth_ratio * (settings.laser_max_power - settings.laser_min_power)

            # Map depth_ratio to feed rate: max_speed - ratio*(max_speed - min_speed) -> max_speed to min_speed
            feed_rate = settings.laser_max_feed_xy - depth_ratio * (settings.laser_max_feed_xy - settings.laser_min_feed_xy)

            if first_point_in_row:
                # Rapid move to the start of the row at safe Z
                lines.append(
                    f"G0 X{x_mm:.3f} Y{y_mm:.3f} Z{settings.safe_z_mm:.3f} "
                    f"F{settings.rapid_rate_xy:.1f}"
                )
                # Move down to engraving Z at the first point 
                lines.append(
                    f"G1 X{x_mm:.3f} Y{y_mm:.3f} Z{engrave_z:.3f} "
                    f"F{feed_rate:.1f} S{laser_power:.1f}"
                )
                first_point_in_row = False
            else:
                # Engraving move: keep Z constant, modulate F and S
                lines.append(
                    f"G1 X{x_mm:.3f} Y{y_mm:.3f} Z{engrave_z:.3f} "
                    f"F{feed_rate:.1f} S{laser_power:.1f}"
                )

        # End of row: retract to safe Z
        lines.append(
            f"G0 Z{settings.safe_z_mm:.3f} F{settings.rapid_rate_xy:.1f}"
        )

    return lines


# File I/O

def save_gcode(lines, output_path):
    with open(output_path, "w", encoding="utf-8") as f:
        for line in lines:
            f.write(line.rstrip() + "\n")


# Main

def image2gcode(image_name, output_name, output_path):

    # Paths
    image_path = image_name          # input height map image (512x512)
    output_gcode_path = output_path + output_name + ".gcode"

    # Physical mapping
    work_area_side_mm = 51.2          # 5.12 cm cube top 
    max_depth_mm = 1.0                # deepest carving depth (mm) when G=0

    # Motion
    safe_z_mm = 2.0                   # safe Z height (mm) for rapid moves above the surface
    rapid_rate_xy = 2500.0            # rapid feed rate in XY (mm/min)

    # If the machine's surface Z is not 0, change this:
    surface_z_mm = 0.0                # Z at top of cube (no carving)
    
    # Laser
    laser_min_power=0.0
    laser_max_power=1000.0    # typical GRBL max
    laser_min_feed_xy=1000.0   # slowest for darkest pixels
    laser_max_feed_xy=3000.0  # fastest for brightest pixels = feed_rate_xy

    # Create settings object
    settings = EngravingSettings(
        work_area_side_mm=work_area_side_mm,
        max_depth_mm=max_depth_mm,
        safe_z_mm=safe_z_mm,
        rapid_rate_xy=rapid_rate_xy,
        surface_z_mm=surface_z_mm,
        laser_min_power=laser_min_power,
        laser_max_power=laser_max_power,
        laser_min_feed_xy=laser_min_feed_xy,
        laser_max_feed_xy=laser_max_feed_xy
    )

    height_map = load_green_height_map(image_path)

    # sanity check: image size
    h_px, w_px = height_map.shape
    if h_px != w_px:
        print(f"Warning: image is not square ({w_px}x{h_px}).")
    else:
        print(f"Loaded height map: {w_px}x{h_px} pixels.")

    depth_map_mm = compute_depth_map_mm(height_map, settings.max_depth_mm)
    pixel_size_mm = compute_pixel_size_mm(settings.work_area_side_mm, w_px)
    print(f"Pixel size: {pixel_size_mm:.4f} mm/pixel")

    gcode_lines: List[str] = []
    gcode_lines += create_gcode_header(settings)
    gcode_lines += generate_raster_gcode(depth_map_mm, pixel_size_mm, settings)
    gcode_lines += create_gcode_footer(settings)

    # Save
    save_gcode(gcode_lines, output_gcode_path)
    print(f"G-code saved to: {output_gcode_path}")

