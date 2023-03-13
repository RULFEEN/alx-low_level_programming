#!/bin/bash

c_files=$(ls *.c)

for c_file in $c_files; do
    gcc -Wall -Werror -Wextra -pedantic -c "$c_file"
done

ar rcs liball.a *.o

rm *.o
