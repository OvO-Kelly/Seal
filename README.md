# Seal Project Demo


## Current Features
- Handwriting recognition system integrated with the OCR pipeline  
- Input successfully tested on separated threads  
- Neural network with NNEngine (GPU supported) 
- Smooth Writing (10-24)
- Flip Right Hand for "Seal Carving" (10-29)


## Unreal Engine Setup

**Engine Version:** Unreal Engine 5.5.3  

### Required Plugins

| Plugin | Description | Source |
|--------|--------------|--------|
| **NNEngine - Neural Network Engine** | Provides runtime inference and GPU acceleration for neural network models. | [NNEngine on Fab](https://www.fab.com/zh-cn/listings/67591270-75f6-456d-aa89-c64e1e0ee05f) |
| **LE Extended Standard Library** | Extends Unreal Engine's blueprint and C++ utility library. | [LE Extended Standard Library on Fab](https://www.fab.com/zh-cn/listings/0aadd41b-c02d-4f63-9009-bffad0070ebc) |


## Editor Settings

Ensure the following settings are configured before running the project:

1. **Enable UV Collision**  
   `Project Settings > Engine > Collision > Enable UV Collision`

2. **Set Loop Maximum**  
   `Editor Preferences > Scripting > Loop Limit > 2,000,000`

3. **Enable Plugins**
   - ✅ NNEngine  
   - ✅ LE Extended Standard Library  

4. **Disable NNERuntimeORT** *(if using GPU)*  
   - NNEngine will automatically utilize its GPU runtime instead.


## Handwriting System Notes

- The handwriting rendering system outputs to a **Render Target 2D**.  
- To ensure **non-tiling** resizing behavior in NNEngine's image preprocessing:
  > The Render Target 2D **aspect ratio** should be **6.6 : 1**.
  Example:  
   If the height is `256 px`, the width should be approximately `1689 px`.
- **Forward Shading** is **incompatible** with **Render Target Additive** blending.  
   - To ensure the handwriting system works correctly, **either**:
   1. **Disable Forward Shading** in Project Settings, **or**  
   2. **Set the brush material (`Brush_Mat`) to Unlit**.
   #### Recommendation:
   - Using **Unlit Brush_Mat** keeps the handwriting system **running smoothly on PC**.  
   - Disabling Forward Shading may keep brush material properties flexible, **but can overwhelm the GPU**.  
   - Currently, the **Brush_Mat is Unlit** for a more stable testing environment.

## Seal Carving with Flipped Right Controller

During the **seal carving phase**, the **right-hand controller** represents the player’s hand holding the carving knife.

- The **right-hand mesh** should be **the right hand with the carving knife mesh** by default.  
- The **tip of the knife** must align **exactly with the tip and direction of the original index finger** —  
  this ensures accurate positioning and direction when carving.  

### Carving Action Simulation
To simulate realistic carving motion:

https://github.com/user-attachments/assets/0a1c5c5c-9e22-4131-8866-4efd390f2e56


- Use a **special controller holding pose** (as demonstrated in the reference video).  
- The **bottom tip of the right controller** acts as the **aim point** on the surface.  
- Use your **thumb to press the "Grab" button** — this controls whether the carving action applies at the current position.

### Seal_BP Testing and Debug Tools

A blueprint named **`Seal_BP`** allows players to pick up and carve directly on the seal stone —  
the logic is similar to handwriting, but carving requires **closer distance and reversed grip**.

- A **debug arrow** is added to visualize the **right hand’s aim position and direction**.  
- The **arrow’s length** equals the **maximum carving distance from hand position** on the `Seal_BP`.  
  When the **arrow tip touches the surface**, holding **Grab** begins carving.  
- Future **knife meshes** can use this arrow as a reference for correct length and alignment.

> In short:  
> - **Right-hand mesh** → Right-hand mesh + Knife mesh  
> - **Knife tip** → Same point & direction as finger tip  
> - **Grab (thumb)** → Controls carving activation  
> - **Pose** → Special carving grip for realism


### Test Instructions (Current Bindings)

The following controller bindings are **temporary for testing** the handwriting and OCR systems:

| Controller | Action |
|-------------|---------|
| **Left Controller - Grab** | Clears the handwriting canvas |
| **Left Controller - Top Button** | Triggers the OCR inference process |
| **Right Controller - Top Button** | Flip the right controller and triggers 'ready to carve' |
| **Right Controller - Grab Button** | Write on canvas or (if controller flipped) carve on Seal_BP |

> These bindings are for **testing only** and may change in future versions.


## Testing Status

| Platform | Status | Notes |
|-----------|---------|-------|
| **PC Input** | ✅ Tested | Handwriting + OCR integration verified |
| **VR Input** | ✅ Tested | To be tested in upcoming phase |

