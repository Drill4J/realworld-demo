@echo off

call .\chromium-setup.bat
call .\chrome-driver-setup.bat

set DRILL_API_KEY=1_01dce51ff20544ff621eae09c725a4eb50d9fea30251c09d4c17764c343ebea4
set DRILL_API_URL=http://localhost:8090/api

call gradlew clean :%1:test
