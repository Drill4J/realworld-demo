#!/bin/bash
destinationDir="./chromium-binary"
zipFile="$destinationDir/chrome.zip"

does_chromium_exist() {
  local binaryPath="$1"
  [ -f "$binaryPath" ]
}

download_and_unzip_chromium() {
  local url="$1"
  local zipFile="$2"
  local destinationDir="$3"

  echo "Downloading Chromium..."
  if curl -L -o "$zipFile" "$url"; then
    echo "Unzipping Chromium..."
    unzip -d "$destinationDir" "$zipFile" && rm "$zipFile"
  else
    echo "Error in downloading Chromium."
    exit 1
  fi
}

mkdir -p "$destinationDir"

if [[ "$OSTYPE" == "darwin"* ]]; then
  chromeBinaryUrl="https://www.googleapis.com/download/storage/v1/b/chromium-browser-snapshots/o/Mac%2F1135589%2Fchrome-mac.zip?generation=1682464249396998&alt=media"
  binaryPath="$destinationDir/chrome-mac/Chromium.app/Contents/MacOS/Chromium"
else
  chromeBinaryUrl="https://www.googleapis.com/download/storage/v1/b/chromium-browser-snapshots/o/Win_x64%2F1148119%2Fchrome-win.zip?generation=1684876145913156&alt=media"
  binaryPath="$destinationDir/chrome-win/chrome.exe"
fi

if does_chromium_exist "$binaryPath"; then
  echo "Chromium binary already exists in $destinationDir. Skipping download."
else
  download_and_unzip_chromium "$chromeBinaryUrl" "$zipFile" "$destinationDir"
fi
