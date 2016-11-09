#!/bin/sh
for i in *.C 
do echo "Kompiluje $i"
  gcc $i -o `basename $i .C`
done
echo "Kompilowanie zakonczone"
