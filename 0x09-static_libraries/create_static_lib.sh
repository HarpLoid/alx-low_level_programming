#!/bin/bash
gcc -c -pedantic -Wall -Werror -Wextra -std=gnu89 *.c
ar -rc liball.a *o
ranlib liball.a
