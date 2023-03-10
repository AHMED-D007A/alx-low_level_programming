#!/bin/bash
gcc -c *.c
ar rcs liball.a
ranlib liball.a
rm -r *.o
