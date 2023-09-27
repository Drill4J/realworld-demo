#!/bin/bash
chromeBinaryUrl="https://www.googleapis.com/download/storage/v1/b/chromium-browser-snapshots/o/Win_x64%2F1148119%2Fchrome-win.zip?generation=1684876145913156&alt=media"
# 1. Ensure dir exists
mkdir -p ./chromium-binary
# 2. Download
curl -L -o ./chromium-binary/chrome-win.zip "$chromeBinaryUrl"
# 3. Unzip
unzip -d ./chromium-binary/ ./chromium-binary/chrome-win.zip
# 4. Remove zip file
rm ./chromium-binary/chrome-win.zip