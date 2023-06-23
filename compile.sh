#!/bin/bash

betty *.c *.h
gcc -Wall -pedantic -Werror -Wextra -g *.c -o monty
./tests.sh
