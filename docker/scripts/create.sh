#!/bin/zsh
echo "Turn on admin part"
docker compose -f ../docker-compose-admin.yml up -d
wait
echo "Turn on real-world_example part"
docker compose -f ../docker-compose-app.yml up -d
