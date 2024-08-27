@echo off

docker-compose -f .\docker-compose-admin.yml down
docker-compose -f .\docker-compose-admin.yml up -d
