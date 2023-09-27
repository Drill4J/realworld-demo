#!/bin/bash
chromeDriverUrl="https://chromedriver.storage.googleapis.com/114.0.5735.90/chromedriver_win32.zip"
# 1. Ensure dir exists
mkdir -p ./chrome-driver
# 2. Download
curl -L -o ./chrome-driver/chromedriver_win32.zip "$chromeDriverUrl"
# 3. Unzip
unzip -d ./chrome-driver/ ./chrome-driver/chromedriver_win32.zip
# 4. Remove zip file
rm ./chrome-driver/chromedriver_win32.zip