# 🪶 Seal Project Demo


## Current Features
- Handwriting recognition system integrated with the OCR pipeline  
- PC input successfully tested on separated threads  
- Neural network with NNEngine (GPU supported)  
- Planned VR handwriting input testing  


## ⚙️ Unreal Engine Setup

**Engine Version:** Unreal Engine 5.5.3  

### Required Plugins

| Plugin | Description | Source |
|--------|--------------|--------|
| **NNEngine - Neural Network Engine** | Provides runtime inference and GPU acceleration for neural network models. | [NNEngine on Fab](https://www.fab.com/zh-cn/listings/67591270-75f6-456d-aa89-c64e1e0ee05f) |
| **LE Extended Standard Library** | Extends Unreal Engine's blueprint and C++ utility library. | [LE Extended Standard Library on Fab](https://www.fab.com/zh-cn/listings/0aadd41b-c02d-4f63-9009-bffad0070ebc) |


## 🧩 Editor Settings

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


## ✍️ Handwriting System Notes

- The handwriting rendering system outputs to a **Render Target 2D**.  
- To ensure **non-tiling** resizing behavior in NNEngine's image preprocessing:
  > The Render Target 2D **aspect ratio** should be **6.6 : 1**.

Example:  
If the height is `256 px`, the width should be approximately `1689 px`.


## 🧪 Testing Status

| Platform | Status | Notes |
|-----------|---------|-------|
| **PC Input** | ✅ Tested | Handwriting + OCR integration verified |
| **VR Input** | 🔧 Planned | To be tested in upcoming phase |

