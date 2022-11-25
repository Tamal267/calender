#!/bin/sh
touch year
date +%Y > year
touch month
date +%m > month
gcc -o cal cal.c && ./cal
chmod +x cmanual.sh
cat test.txt
