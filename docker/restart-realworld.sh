#!/bin/bash
docker-compose -f docker-compose-app.yml down -v;
# docker-compose -f docker-compose-app2.yml down -v;
docker-compose -f docker-compose-app.yml up -d;
# docker-compose -f docker-compose-app2.yml up -d;
