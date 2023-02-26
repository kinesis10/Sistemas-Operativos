#!/bin/bash
echo "******Dada las siguiente tabla de paginas*****"
cat arch2
echo " **seleccione para calcular su direccion fisica**"

echo "ingrese la pagina"
read pag
op=1
while [[ $op -eq 1 ]]; do
bit=$(grep P$pag arch2 | cut -d "," -f3)
if [[ $bit -eq "0" ]]; then
  echo " Error, la pagina no esta en memoria"
  exit
else 
  echo " ingrese el desplazamiento de dicha pagina"
  read desp
  if [[ $desp -gt 4096 ]]; then
      echo "la pagina no esta en memoria"
      exit
  else
      dir=$(grep P$pag arch2 | cut -d "," -f2)
  	let res=$dir+$desp
  	echo " la direccion fisica de p$pag es : $res"
  fi
fi
echo "Quiere seguir calculando direcciones fisicas? 0 para 'NO' y 1 para 'SI'"
read op
done
