#!/bin/bash

# Compile each .c file into a corresponding .o file
gcc -c *.c

# Create the static library from all .o files
ar rc liball.a *.o

# Optionally, update the library
ranlib liball.a

# Clean up: remove the temporary .o files
rm *.o