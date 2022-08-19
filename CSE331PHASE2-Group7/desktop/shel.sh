#!/bin/sh

x=1
c=35213543

while [ $x -eq 1 ]
do
	top -i | head -13 | tail -n -5 >> out.txt
	echo "ulas" >> out.txt
done
