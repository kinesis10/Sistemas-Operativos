#dado el directorio dir1 que debe ser pasado coomo parametro calcular la cantidad de lineas que tiene cada uno de sus archivos 
#hubicados en el primer nivel 
# dejar en el archivo de nombre informe el nombre dle mismo con su correspondente cantidad de lineas y al final  del mismo dejar 
# la cant de archivos procesados , chequear que se pase un parametro y sea un directorio

#!/bin/bash

if [[ ! -d $1  ]]; then
  echo "Debe ingresar un directorio"
  exit
fi
if [[ ! $# -eq 1 ]]; then
  echo " debe ingresar un parametro (directorio)"
  exit
fi
total=0
for i in $(find $1 -type f); do
  nombre=$(cat $i | cut -d " " -f1)
  cantLin=$( cat $i | wc -l)
  let total=$tolal+1
  echo " el archivo: $nombre tiene $cantLin cantidad de lineas" >> info1
done
echo " cantidad de archivos procesados" $total >>info1

# me tira cualquier cosa

