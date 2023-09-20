#!/bin/bash

read -p "Enter Number 1: " no1
read -p "Enter Number 2: " no2
read -p "Enter Number 3: " no3

if [ $no1 -gt $no2 ] && [ $no1 -gt $no3 ]; then
    echo "Number 1 is the greatest: $no1"
elif [ $no2 -gt $no1 ] && [ $no2 -gt $no3 ]; then
    echo "Number 2 is greatest: $no2"
else
    echo "Number 3 is greatest: $no3"
fi
