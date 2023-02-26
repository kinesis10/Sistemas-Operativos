#8- Compruebe si un directorio cualquiera pasado como argumento existe, en tal caso
#contabilizar la cantidad de archivos y directorios, guardar ambos contadores en un archivo.
#Usar una estructura repetitiva para resolverlo.

#!/bin/bash

conA=0
conD=0
if [ -d $1 ]; then
	let contA= contA +1
fi

