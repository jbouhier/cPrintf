#!/bin/bash

gcc unit_testing.c -L. -lmy_printf_x86_64-Darwin
./a.out
rm a.out
