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
sudo mkdir /usr/share/tlp-switch
sudo cp .configs/* /usr/share/tlp-switch
```
# Usage
```bash
tlp-switch <performance|default|extreme|extreme-hybrid> # This power modes are adapted to my system!
```