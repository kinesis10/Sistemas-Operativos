#!/bin/bash

#Hacer un script que guarde en el archivo conectados todos los usuarios conectados al
#sistema y si al script le paso como parámetro un usuario cualquiera me informe solamente
#este usuario y la hora de conexión al servidor.

conectados=$(who)

if [[ $# -eq 1 ]]; then
  usu=$(who | grep $1 | awk '{print $1}')
  if [[ "$usu" = "$1" ]]; then
    var=$(who | grep $1 | awk '{print $1,$4}')
    echo $var > conect
    cat conect
  else
    echo "el usuario $1 no se a conectado o no existe"
  fi
else 
  echo $conectados
fi 


#otra manera de hacero no tan linda
#DATE=$(date)
#if [[ $1 -eq 1 ]]; then
#  usu=$(who | grep $1 | awk '{print $1,$4}')
#  echo $usu
#else
#  echo "alumnos  conectados$DATE"  >> conectados
#  who | cut -d " " -f1 >> conectados
#fi
#cat conectados


