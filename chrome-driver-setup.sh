#!/bin/bash
chromeDriverUrl="https://chromedriver.storage.googleapis.com/114.0.5735.90/chromedriver_win32.zip"
destinationDir="./chrome-driver"
zipFile="$destinationDir/chromedriver_win32.zip"

# 1. Ensure dir exists
mkdir -p "$destinationDir"

# 2. Check if the unzipped files already exist
if [ ! -f "$destinationDir/chromedriver.exe" ]; then
    # 3. Download
    curl -L -o "$zipFile" "$chromeDriverUrl"

    # 4. Unzip
    unzip -d "$destinationDir" "$zipFile"

    # 5. Remove zip file
    rm "$zipFile"
else
    echo "Chromedriver already exists in $destinationDir. Skipping download."
fi
