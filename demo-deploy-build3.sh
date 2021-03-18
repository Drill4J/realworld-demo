#! /bin/bash
docker-compose -f docker/docker-compose-app2.yml down
docker-compose -f docker/docker-compose-app3.yml up -d
