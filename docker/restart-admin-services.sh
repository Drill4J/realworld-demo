#!/bin/bash
docker-compose -f ./docker-compose-admin.yml down;

# copy .yml and download backup from https://github.com/Drill4J/mtb-config
docker-compose -f ./docker-compose-metabase.yml down;

docker-compose -f ./docker-compose-metabase.yml up -d;
docker-compose -f ./docker-compose-admin.yml up -d;
