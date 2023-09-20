#!/bin/bash

read -p "Enter first number: " a
read -p "Enter the second number: " b
read -p "1. Addition 2. Subtraction 3. Division 4. Multiplication. Input the operation: " ch

case $ch in
1)
     res=$(expr $a + $b)
     echo "Sum: $res"
     ;;
2)
     res=$(expr $a - $b)
     echo "Difference: $res"
     ;;
3)
     res=$(expr $a \* $b)
     echo "Product: $res"
     ;;
4)
     res=$(expr $a / $b)
     echo "Division: $res"
     ;;

esac
