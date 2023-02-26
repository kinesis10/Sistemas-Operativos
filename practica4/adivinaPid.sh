#!/bin/bash

#echo $$ //muestra el pid
let can=0
echo "**Juego de adivinanzas, si adivinas e pid aprobas Sistemas operativos***"

while [ true ]; do
  read -p "ingresa el pid que crees" pid

  if [[ $pid -eq $$ ]]; then
    echo "adivinaste"
    echo "la cantdad de intentos fueron $can"
    exit
  fi
  if [[ $pid -lt $$ ]]; then
    echo "el pid es mas grande, sigue inentando"
    let can++
  else
    echo "el píd es mas chico, sigue intentando"
    let can++
  fi
  # can++ // deberia ir aca, queda mas mejor y menos pior
done
