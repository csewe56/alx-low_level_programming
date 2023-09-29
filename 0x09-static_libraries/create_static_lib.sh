#!/bin/bash

# Step 1: Compile individual source files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Step 2: Create the static library
ar rcs liball.a *.o

# Step 3: Clean up object files
rm -f *.o

echo "Static library liball.a created successfully!"

# End of script
