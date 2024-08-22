@echo off

set "chromeBinaryUrl=https://www.googleapis.com/download/storage/v1/b/chromium-browser-snapshots/o/Win_x64%%2F1148119%%2Fchrome-win.zip?generation=1684876145913156&alt=media"
set "destinationDir=.\chromium-binary"
set "zipFile=%destinationDir%\chrome-win.zip"

REM 1. Ensure dir exists
if not exist "%destinationDir%" mkdir "%destinationDir%"

REM 2. Check if the unzipped files already exist
if not exist "%destinationDir%\chrome-win\chrome.exe" (
    echo Downloading Chromium...
    
    REM 3. Download
    powershell -Command "Invoke-WebRequest -Uri '%chromeBinaryUrl%' -OutFile '%zipFile%'"
    
    REM 4. Unzip
    powershell -Command "Expand-Archive -Path '%zipFile%' -DestinationPath '%destinationDir%'"
    
    REM 5. Remove zip file
    del "%zipFile%"
) else (
    echo Chromium binary already exists in %destinationDir%. Skipping download.
)
