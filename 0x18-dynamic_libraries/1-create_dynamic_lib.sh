#!/bin/bash
gcc -wall -wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LC_LIBRARY_PATH=.:$LD_LIBRARY_PATH
