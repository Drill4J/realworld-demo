#!/bin/bash
docker-compose -f ./docker-compose-admin.yml down;
docker-compose -f docker-compose-app.yml down -v;
docker-compose -f docker-compose-app2.yml down -v;

docker volume rm agent-files;
