#!/bin/bash

#Hacer un script que reciba como parámetro un directorio cualquiera, y calcule el tamaño
#de cada uno de sus archivos (ordinarios o directorios), además contabilizar los archivos
#ordinarios y directorios que existen.

if [[ $# -eq 0 ]]; then
  echo " debe ingresar un directorio como parametro"
  exit
fi
if [[ -d $1 ]]; then
  cantA=$(find $1 -type f | wc -l)
  echo "la cantidad de archivos del dir $1 es $cant"
else
  echo "El paramero debe ser un directorio"
fi

