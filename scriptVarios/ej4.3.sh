
#!/bin/bash

if [[ ! -d $1 ]]; then
	echo "el parametro ingresado no es un directorio"
	exit
else
	for i in $(find $1/* -maxdepth 1 -type f -name "ej*"); do
	echo $1 >> name
	cat name
	done
	for i in $(find $1/* -maxdepth 1 -type f -name "*txt"); do
	echo $1 >> extend
	done
	for i in $( find $1/* -maxdepth 1 -type f -perm 644); do
	echo $1 >> perm
	done
	for i in $(find $1/* -maxdepth 1 -type f -size 1k); do
	echo $1 >> tam
	done
fi
	
