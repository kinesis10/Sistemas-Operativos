#!/bin/bash

#Hacer un scripts que permita tomar la decisión de cambiar los niveles de intercambio entre la memoria swap y la
#RAM, en este caso el scripts me debe solicitar al ejecutarlo:
#- 0% de nivel de intercambio.
#- 50% de nivel de intercambio.
#- 100% de nivel de intercambio.
#Tener en cuenta que si el sistema operativo se reinicia
# debe volver a los valores por defecto.

echo "***Menu**"
intercambio=$(cat /proc/sys/vm/swappiness)
echo " Nivel de intercambio actual $intercambio"
echo "elija una opcion"
echo "1) 0% de nivel de intercambio."
echo "2) 50% de nivel de intercambio."
echo "3)100% de nivel de intercambio."
echo "Presione cualquier tecla para salir"
read op
case $op in
    1)
  echo "Se actualizo a:"
  sudo sysctl -w vm.swappiness=0
    ;;
    2)
  echo "Se actualizo a:"
  sudo sysctl -w vm.swappiness=50
    ;;
    3)
  echo "Se actualizo a:"
  sudo sysctl -w vm.swappiness=100
    ;;
    *)
   exit
    ;;
esac

