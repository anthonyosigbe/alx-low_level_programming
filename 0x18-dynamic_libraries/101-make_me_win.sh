#!/bin/bash
gcc -shared -o lprintf.so -fPIC winJackpot.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
