#!/bin/bash

echo "ingrese el numero de pagina"
read pag
echo "p$pag"
#me traigo el bit de validez
bit=$(grep p$pag arch1 | cut -d "," -f3) 

if [[ $bit -eq "1" ]]; then
  echo "El bit de validez esta en 1, puede continuar..."
  echo  "ingrese el desplazamiento"
  read desp
  echo " desplazamiento : $desp"
  if [[ $desp -gt "1024" ]]; then
    echo " error, la pagina sobrepasa el desplazamiento"
    exit
  else
    dir=$(grep p$pag arch1 | cut -d "," -f2)
    let res=$desp+$dir
    echo " la direccion fisica es $res"
  fi
else
  echo "el bit de validez esta en 0, no puede calcular la direccion fisica, ya que no esta en la pagina... o algo asi"
fi

