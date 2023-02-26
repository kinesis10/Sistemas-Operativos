#!/bin/bash

#empaquetar

#find $1 -atime + 30 -type f - exec tar rf A.tar {};\ (para hacerlo en 1 linea co exec
 if [ $# -ne 1 ] || [ -d $1 ]; then
	for i in $(find $1 -atime + 30 -type f); do
	tar rf A.tar $i
#	cp $1 dir
	done
