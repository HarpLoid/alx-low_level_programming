#!/bin/bash

echo "Compiling and Assembling .c files"
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

echo "Creating Dynamic Library"
gcc -shared -o liball.so *.o

echo "Removing Object files"
rm *.o

exit
