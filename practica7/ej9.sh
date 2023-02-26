
#!/bin/bash

#Hacer un script que me informe los tipos de particiones que tiene el disco, y los tamaños
#en megabyte de las mismas. ( Comando fdisk )


echo > info | sudo fdisk -l | grep "dev/nvme0n1p" | awk '{print $1, $5}'

