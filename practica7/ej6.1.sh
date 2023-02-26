#!/bin/bash

#Escribir un script que modifique sobre un archivo cualquiera pasado por parámetros el dueño, el
#grupo y le deje solo lectura a otros


if [[ $# -eq 0 && ! -f $1 ]]; then
  echo "debe ingresar un parametro y debe ser un archivo" 
  exit
else
  chown pablo $1
  chgrp pablo $1
  chmod 774 $1 
fi
