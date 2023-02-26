#!/bin/bash

# stat 
#u  g  o
#rwx
#000
#100 =4
#001=1

for i in ../practicas/tp1/*; do
	per= $(stat -c %a $i)
	if [[ $per -eq 644 && -f $i ]]; then
		echo $i >> perm664
	fi
done
