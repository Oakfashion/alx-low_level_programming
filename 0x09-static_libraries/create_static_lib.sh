#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

if [[ -z $c_files ]]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into object files
for file in $c_files; do
  gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar rcs liball.a *.o

echo "Static library liball.a created successfully."

# Clean up object files
rm -f *.o
