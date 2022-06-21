#!/usr/bin/env bash
# This script creates a library from all the c files in the
# working directory.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ar -t liball.a
ranlib liball.a
