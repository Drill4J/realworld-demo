#!/bin/zsh
echo "Delete and clean up admin part"
docker compose -f ../docker-compose-admin.yml down -v
wait
echo "Delete and clean up real-world_example part"
docker compose -f ../docker-compose-app.yml down -v