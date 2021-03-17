#! /bin/bash
docker-compose -f ./docker-compose-app.yml down -v --remove-orphans
docker-compose -f ./docker-compose-admin.yml down -v --remove-orphans
