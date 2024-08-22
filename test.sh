#!/bin/sh

./chromium-setup.sh;
./chrome-driver-setup.sh;

export DRILL_API_KEY="1_01dce51ff20544ff621eae09c725a4eb50d9fea30251c09d4c17764c343ebea4"
export DRILL_API_URL="http://localhost:8090/api"

./gradlew clean :$1:test;
