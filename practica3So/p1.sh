#!/bin/bash

if [ $# - ne 1 ] || [ ! -d $1 ]; then
	echo error
	exit
fi
for i in $(find $1 -name "*.sh" -type f -perm 755); do
	tar rf ejecutable.tar $i
done
#no recursivo for i in $1/*.sh
#find $1 -name "*.sh" -type f -perm 755 -exec tar vf ejecutable.tar {}



# c crear, z comprimir x extraer, f establecer nombredel archivo,-C extraer en otro directorio
# -v ver, -r agregar archivos a tar existente, si no existe lo creo 
