#! /bin/bash

echo '___Start Drill admin___'
docker-compose -f docker/docker-compose-admin.yml up -d
sleep 5
echo '___Start RealWorld App Angular+Spring___'
docker-compose -f docker/docker-compose-app.yml up -d
sleep 20
echo 'App has been started on http://localhost:8080'
echo 'Lets start to use Drill on http://localhost:8091'