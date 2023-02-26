#!/bin/bash

#Crear un script al cual se le pase como argumento un nombre de usuario y muestre los procesos que
#está ejecutando ese usuario. En caso de que no se pase ningún argumento, debe mostrar todos los
#procesos en ejecución, y en caso de que el usuario pasado como argumento sea root, mostrar un
#mensaje de error
if [[ $# -eq 1 ]]; then
  if [[ $1 == root ]]; then 
    echo "error"
    exit
  fi
  ps aux | grep ^$1 

fi

if [[ $# -eq 0 ]]; then
  ps aux

fi
 