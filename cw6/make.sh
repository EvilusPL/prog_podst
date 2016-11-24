#!/bin/sh
for i in *.c 
do echo "Kompiluje $i"
  gcc $i -o `basename $i .c`
done
echo "Kompilowanie zakonczone"
