#!/bin/bash
docker-compose -f ./docker-compose-admin.yml down;
docker-compose -f ./docker-compose-admin.yml up -d;

docker ps --format "table {{.ID}}\t{{.Names}}\t{{.Ports}}" | sed "s/0\\.0\\.0\\.0://g" | sed "s/->/:/g" | sed "s/,/ /g" | sed "s/\/tcp//g"
