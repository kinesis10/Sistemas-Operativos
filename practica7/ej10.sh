#!/bin/bash

# Realizar un script que busque en un directorio cualquiera pasado como parámetro, los
#archivos *.mp3 y los borre, ademas que busque los archivos que tienen permisos 744 y
#los mueva a un directorio llamado “exe”
if [[ $# -eq 0 ]; then
  echo "Debe ingresar un directorio como parametro"
  exit
fi
if [[ -d $1 ]]; then

  find $1 -name "*.mp3" -exec rm -r {} \;
  find $1 -perm 744 -exec mv /$HOME/practicas/exe {} \;
else
  echo "el parametro debe ser un directorio"
fi
