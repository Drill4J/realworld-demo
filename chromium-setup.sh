#!/bin/bash
chromeBinaryUrl="https://www.googleapis.com/download/storage/v1/b/chromium-browser-snapshots/o/Win_x64%2F1148119%2Fchrome-win.zip?generation=1684876145913156&alt=media"
destinationDir="./chromium-binary"
zipFile="$destinationDir/chrome-win.zip"

# 1. Ensure dir exists
mkdir -p "$destinationDir"

# 2. Check if the unzipped files already exist
if [ ! -f "$destinationDir/chrome-win/chrome.exe" ]; then
    # 3. Download
    curl -L -o "$zipFile" "$chromeBinaryUrl"
    
    # 4. Unzip
    unzip -d "$destinationDir" "$zipFile"
    
    # 5. Remove zip file
    rm "$zipFile"
else
    echo "Chromium binary already exists in $destinationDir. Skipping download."
fi
