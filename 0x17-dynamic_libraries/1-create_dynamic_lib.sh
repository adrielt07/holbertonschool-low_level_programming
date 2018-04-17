#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fPIC *.c
gcc -shared -o liball.so *.o
