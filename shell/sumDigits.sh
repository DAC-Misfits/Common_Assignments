#!/bin/bash

read -p "Number: " no
summation=0
while [ $no != 0 ]; do
    mod=$(($no % 10))
    summation=$(($summation + $mod))
    no=$(($no / 10))
done
echo Sum of the digits: $summation
