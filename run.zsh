#!/bin/zsh

file="$1"

g++ "$file" -o "output" && "./output"
