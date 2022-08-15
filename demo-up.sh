#! /bin/bash

echo 'Starting Drill4J services...'
docker-compose -f docker/docker-compose-admin.yml up -d
echo 'Starting example application - RealWorld App Angular + Spring'
docker-compose -f docker/docker-compose-app.yml up -d
echo 'Drill4J Admin Panel is available at http://localhost:8091'
echo 'Example application is available at http://localhost:8080 (wait a few seconds for it to become available)'
