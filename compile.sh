#!/bin/bash


cc -Wall -Wextra $1 $2 $3 $4 $5 $6 $7 $8 $9 && ./a.out && rm a.out
# cc -Wall -Wextra -fsanitize=address $1 $2 $3 $4 $5 $6 $7 $8 $9 && ./a.out && rm a.out
