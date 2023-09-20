#!/bin/bash

read -p "Enter Number of lines to print: " n
for ((i = 1; i <= n; i++)); do
  for ((j = 1; j <= i; j++)); do
    echo -n "$j "
  done
  echo
done

echo

for ((i = 1; i <= n; i++)); do
  for ((j = 1; j <= i; j++)); do
    echo -n "$i "
  done
  echo
done

echo

for ((i = 1; i <= n; i++)); do
  for ((j = 1; j < i; j++)); do
    echo -n "| "
  done
  echo -n "|"
  echo -n "_"
  echo
done

echo
