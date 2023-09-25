@echo off
echo "Turn on admin part"
docker-compose -f ../docker-compose-admin.yml up -d
ping 127.0.0.1 -n 6 > nul
echo "Turn on real-world_example part"
docker-compose -f ../docker-compose-app.yml up -d