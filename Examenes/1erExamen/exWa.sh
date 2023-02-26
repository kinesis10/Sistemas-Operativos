#!/bin/bash

if [[ $# -ne 1 ]]; then
      echo "debe ingresar solo un parametro"
      exit
fi

if [[ ! -d $1 ]]; then
      echo " lo ingresado no es un directorio"
      exit

find $1 -type f -maxdepth 1 -executable | cut -d "/" -f6 > execute
find $1 -type f -maxdepth 1 ! -executable | cut -d "/" -f6 > noexecute
find $1 -type f -maxdepth 1 -name "*.doc" | cut -d "/" -f6 > doc

numLineas=$(cat execute | wc -l)
numLineasNo=$(cat noexecute | wc -l)
numLineasDoc=$(cat doc | wc -l)

let total=($numLineas+$numLineasNo+$numLineasDoc)
echo "total de lineas executables $numLineas " >> totales
echo "total de lineas no ejecutables $numLineasNo " >> totales
echo "total de lineas de ticpo doc $numLineasDoc " >> totales

cat totales
