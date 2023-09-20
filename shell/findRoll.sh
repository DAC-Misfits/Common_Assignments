#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "usage: $0 <file_name> <search>"
    exit 1
fi

file_name="$1"
roll="$2"

if [ -e "$file_name" ]; then
    if [ $(cat $file_name | grep "$roll:") ]; then
        read -p "What do you want to change: 1.Roll number   2.Name     3.Marks select a choice: " ch
        case "$ch" in
        1)
            read -p "Enter new roll number: " new_roll
            sed "s/$roll/$new_roll/g" $file_name
            ;;
        2)
            read -p "Enter new name: " new_name
            oldname=$(grep -o '\:.*:' $file_name | cut -c2- | rev | cut -c2- | rev)
            sed "s/$oldname/$new_name/g" $file_name
            cat $file_name | grep "$roll:"
            ;;
        3)
            read -p "Enter new marks: " new_marks
            sed "s/$roll/$new_marks/g" $file_name
            ;;
        esac
    else
        echo not exist
    fi

else
    echo "File '$file_name' does not exist."
fi
