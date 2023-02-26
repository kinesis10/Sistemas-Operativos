#!/bin/bash
#Crear un script simple que genere una iteración de 1 a 10, por parámetro ingresar en que momento #quiere cortar esa iteración y devolver el control del bash. (Sugerencias: comando “pgrep” y usar #comando sleep
#como para retrasar la ejecución y observar el resultado ).

for i in $(seq 1 10); do
  if [[ $1 -eq i ]]; then
    pgrep $i
  fi
  
done
