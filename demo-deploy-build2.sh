#! /bin/bash
docker-compose -f docker/docker-compose-app.yml down
docker-compose -f docker/docker-compose-app2.yml up -d
