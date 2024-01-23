#!/bin/bash

destinationDir="./chrome-driver"

download_and_unzip_chromedriver() {
  local url="$1"
  local zipFile="$2"
  local destinationDir="$3"

  echo "Downloading ChromeDriver..."
  if curl -L -o "$zipFile" "$url"; then
    echo "Unzipping ChromeDriver..."
    unzip -d "$destinationDir" "$zipFile" && rm "$zipFile"
  else
    echo "Error in downloading ChromeDriver."
    exit 1
  fi
}

mkdir -p "$destinationDir"

if [[ "$OSTYPE" == "darwin"* ]]; then
  chromeDriverUrl="https://chromedriver.storage.googleapis.com/114.0.5735.90/chromedriver_mac64.zip"
  zipFile="$destinationDir/chromedriver_mac64.zip"
  binaryPath="$destinationDir/chromedriver"
else
  chromeDriverUrl="https://chromedriver.storage.googleapis.com/114.0.5735.90/chromedriver_win32.zip"
  zipFile="$destinationDir/chromedriver_win32.zip"
  binaryPath="$destinationDir/chromedriver.exe"
fi

if [ -f "$binaryPath" ]; then
  echo "ChromeDriver already exists in $destinationDir. Skipping download."
else
  download_and_unzip_chromedriver "$chromeDriverUrl" "$zipFile" "$destinationDir"
fi
