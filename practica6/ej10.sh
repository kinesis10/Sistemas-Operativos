#!/bin/bash

#pablo    tty7         :0               Wed Nov 23 15:02    gone - no logout
#Hacer un script que informe si un usuario cualquiera se conectó al servidor en el último
#mes, ejercicio para usar el comando “last”


echo " ingrese el nombre del usuario"
read nom


nomBusca=$(last | grep $nom | head -1 | cut -d " " -f1)
echo $nomBusca
if [[ "$nom" = "$nomBusca" ]]; then
  echo " usuario encontrado, ingrese el mes para ver si se conecto"
  read mes
  mesBusca=$(last | grep $nom | head -1 | awk '{print $5}')
  if [[ "$mesBusca" =  "$mes" ]]; then
    echo " El usuario $nomBusca se conecto en el mes $mesBusca"
  else
    echo "el usuario $nom no se conecto en el mes $mes"
  fi
else
  echo " el usuario no se encontro, verifique que este bien escrito su nombre"

fi



