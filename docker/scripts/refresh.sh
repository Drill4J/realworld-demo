#!/bin/zsh
sh ./shutdown.sh
wait
sh ./create.sh
wait
echo "Successfully executed"
