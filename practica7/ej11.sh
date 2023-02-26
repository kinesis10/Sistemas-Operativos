#/bin/bash

#Dado un directorio cualquiera pasado por parámetro, crear un script que me
#devuelva el nombre del archivo más grande y su correspondiente tamaño.


nombreTamanio=$(ls -lS | head -2 | awk '{ print $9, $5}')
echo $nombreTamanio
