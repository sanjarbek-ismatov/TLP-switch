# TLP-switch
 TLP automation

# Installation
## Build and Install
```bash
cmake -B build
cmake --build build
sudo cmake --install build
```
## Copy configs to a specific location
```bash
sudo mkdir -p /usr/share/tlp-switch/configs
sudo cp configs/* /usr/share/tlp-switch/configs
```
# Usage
```bash
tlp-switch <performance|balanced|extreme|extreme-hybrid> # This power modes are adapted to my system!
```