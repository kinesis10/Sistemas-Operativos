sed -i 's/Windows/Linux/' arch.txt #solo la primera palabra que coincide 

cat arch.txt | sed 's/Windows/Linux/' 

sed -i 's/Windows/Linux/2' arch.txt # las dos primeras palabras que coinciden

sed -i 's/Windows/Linux/g' arch.txt # todas las palabras que coinciden

sed -i '3 s/Windows/Linux/' arch.txt # reemplaza las palabras que coinciden en la linea 3

sed -i '1,3 s/Windows/Linux/' arch.txt #idem anterior pero en un rango

sed '5d' fichero.txt #borra la 5ta linea

sed '$d' fichero.txt # borra la ultima linea

sed '1,3d' fichero.txt #borra un rango de lineas

sed 's/[a-z]/\U&/g' #pasar a mayusculas

sed 's/[A-Z]/\L&/g' #pasar a minusculas

sed -i "s|^|   |g" # espacios en blanco al principio

