#!/bin/bash

# Compile all the source code to object files
gcc -c *c

# Create the dynamic libray file from the object files
gcc -shared -o liball.so *.o

# Add the current directory to the directories the linker/loader will search for
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
