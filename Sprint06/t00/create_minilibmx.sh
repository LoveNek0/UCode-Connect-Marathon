#!/bin/bash
array=($( ls *.c )) #
clang -c ${array[*]} #
ar rcs minilibmx.a ${array[*]} #
array=($( ls *.o )) #
rm ${array[*]} #