#!/bin/bash

read -p "Enter your weight: " weight

if [ $weight -gt 29 ] && [ $weight -lt 251 ]; then
    echo "Welcome to the MBT Club"
else
    echo "Sorry you are not allowed to enter the MBT Club"
fi
