#!/bin/bash

# Compile each .c file into a corresponding .o file
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -c "$file" -o "${file%.c}.o"
done

# Create the static library liball.a from all .o files
ar rcs liball.a *.o

# Clean up: remove the intermediate .o files
rm -f *.o

