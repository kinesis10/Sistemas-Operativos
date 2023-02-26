#recorrer un dir y contar:
#cant de palabras en cada archivo
#cant de lineas en cada archivo
#cant de caracteres en cada archivo
#cant de arch leidos
# que queden de la seiguente forma:
#cant de caracteres en el archivo XXXX = XX
#cant de palabras del archivo XXXX =xx
#cant de lineas del archivo XXXX= xx
#...
#total de archivos leidos: xx

#!/bin/bash

if [[ ! -d $1 ]]; then
  echo "el parametro debe ser un dierectorio"
  exit
fi
if [[ ! $# -eq 1 ]]; then
  echo "Debe ingresar un directorio como parametro"
  exit
fi

total= 0

for i in $1*; do
  if [[ -f $i ]]; then
    nombre=$(echo $i | cut -d " " -f1)
    cantCar=$(cat $i | wc -c)  
    cantPal=$(cat $i | wc -w) 
    cantLin=$(cat $i | wc -l) 
    let total=total+1
    echo "cantidad de caracteres del archivo : $nombre = $cantCar" >> res1
    echo "cant de Palabras del archivo $nombre = $cantPal" >> res1
    echo " cant de lineas del archivo : $nombre = $cantLin" >> res1
    
  fi
done
echo " total de archivos leidos " $total >> res1
# nose que onda me tira cualquier cosa.

