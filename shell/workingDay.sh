#!/bin/bash

read -p "Enter the day: " day

case "$day" in
"monday") echo "Working day" ;;
"tuesday") echo "Working day" ;;
"wednesday") echo "Working day" ;;
"thrusday") echo "Working day" ;;
"friday") echo "Working day" ;;
"saturday") echo "Not a working day" ;;
"sunday") echo "Not a working day" ;;
esac
