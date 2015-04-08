#!/bin/bash

gcc main.c -L. -lmy_printf_x86_64-Darwin
./a.out
rm a.out
