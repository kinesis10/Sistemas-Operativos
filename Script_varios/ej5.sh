+#!/bin/bash

if [ ! $# -eq 2 ]; then
  echo "Deben ser dos parametros"
  exit
fi

if [ ! -d $1 ]; then
  echo "Lo ingresado no es un directorio"
  exit
fi

for i in $1/*; do
  mod=$(stat --format %y $i | cut -c07 | cut -d "-" -f1)
  if [[ mod -eq $2 ]]; then
    echo "en el mes $2 fueron modificados $i "
  else
  echo "en el mes $2 no fue modificado ningun archivo $i"
  fi
done
