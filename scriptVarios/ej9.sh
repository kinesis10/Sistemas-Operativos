#Implementar un script usando la sentencia while, en donde se lea el archivo passwd línea por línea y
#se imprima el mismo por Terminal.

#!/bin/bash

while read linea; do
	echo $linea
done < /etc/passwd

