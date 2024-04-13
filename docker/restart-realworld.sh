#!/bin/bash
docker-compose -f docker-compose-app.yml down -v;
docker-compose -f docker-compose-app.yml up -d;
