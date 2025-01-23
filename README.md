# TLP-switch
 TLP automation

# Build
```bash
gcc cli.c -o builds/tlp-switch
```
# Installation
```bash
mkdir -p ~/.local/bin
# For local:
cp builds/tlp-switch ~/.local/bin
chmod 755 ~/.local/bin/tlp-switch
# For system-wide
cp builds/tlp-switch /usr/bin
sudo chmod 755 /usr/bin/tlp-switch
```
# Usage
```bash
tlp-switch <default|extreme> # This power modes are adapted to my system!
```