#recorrer el directorio carpeta y cuente
#catntidad de caracteres de cada archivo
#cant de palabras de cada archivo
#can de lineas de cada archivo

#cant de archivos leidos

#dejar los contadores en el arch resultado de la siguiente forma:
#cant de caracteres del archivo nombre= xx
#cant de palabras del archivo nombre= xx
#cant de lineas del archivo nombre= xx
#total de archivos leidos = xx

#!/bin/bash

for i in /home/pablo/Escritorio/SO*; do
	if [ -f $i ]; then
		cantCaract=$(cat $i | wc -c)
		cantPal=$(cat $i | wc -w)
		cantLin=$(cat $i | wc -l)
		nombre=$(echo "$i" | cut -d "/" -f3)
		echo "Archivo" $nombre > resultado
		echo "cantidad de caracteres" $cantCaract  > resultado
		echo "cantidad de palabras" $cantPal > resultado
		echo "cantidad de lineas" $cantLin > resultado 
		let total=($total +1)
	fi
done

echo  el total de archivos leidos es $total > resultado
cat resultado


