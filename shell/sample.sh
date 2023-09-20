#!/bin/bash

read -p "Enter your name" name
read -p "Enter your age" age

echo Your age is $age
echo Your name is $name

if [ $age -eq 24 ]
	then 
		echo Your Age matches requirement
else 
	echo Your Age exceeds
fi

