#!/bin/sh

export DRILL_API_KEY="1_1d5e9bc750d3190dece821c66cbb3610b054154c1232e512f8f7f78ee5ae15e6"
export DRILL_API_URL="http://localhost:8090/api"

./gradlew clean :$1:test
