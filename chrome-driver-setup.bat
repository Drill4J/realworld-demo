@echo off

set "chromeDriverUrl=https://chromedriver.storage.googleapis.com/114.0.5735.90/chromedriver_win32.zip"
set "destinationDir=.\chrome-driver"
set "zipFile=%destinationDir%\chromedriver_win32.zip"

REM 1. Ensure dir exists
if not exist "%destinationDir%" mkdir "%destinationDir%"

REM 2. Check if the unzipped files already exist
if not exist "%destinationDir%\chromedriver.exe" (
    echo Downloading Chrome Driver...

    REM 3. Download
    powershell -Command "Invoke-WebRequest -Uri '%chromeDriverUrl%' -OutFile '%zipFile%'"

    REM 4. Unzip
    powershell -Command "Expand-Archive -Path '%zipFile%' -DestinationPath '%destinationDir%'"

    REM 5. Remove zip file
    del "%zipFile%"
) else (
    echo Chromedriver already exists in %destinationDir%. Skipping download.
)
