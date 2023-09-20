#!/bin/bash

read -p "Enter your name: " name

hour=$(date +%H)

if [ $hour -gt 0 ] && [ $hour -lt 12 ]; then
    echo "Good Morning $name."
elif [ $hour -gt 12 ] && [ $hour -lt 17 ]; then
    echo "Good Afternoon $name."
else
    echo "Ja ke so ja $name."
fi
