#!/bin/bash
#Hacer un scripts que permita indicarle por parámetro si quiero habilitar o deshabilitar la memoria swap
echo "***Memoria Swap***"
read -p " ingrese 1 para habilitar la memoria swap o 0 para inhabilitarla", var

if [[ $var -eq 1 ]]; then
  sudo swapon -a
  echo "Se activo memoria swap"
fi
if [[ $var -eq 0 ]]; then
  sudo swapoff -a
  echo " se desactivo memoria swap"
fi


