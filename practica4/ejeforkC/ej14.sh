#/bin/bash

echo "*****juego de adivinanzas***"
echo $$
let intentos=O
while [ true ]; do
read -p "ingrese el pid que cree que tiene este proceso" pid

if [[ pid -eq $$ ]]; then
  echo " ADIVINO!! el pid es $pid"
  echo " usted intento $intentos veces sin exito"

  exit
else
  if [[ pid -lt $$ ]]; then
    echo " el pid es MAS GRANDE, siga intentando"
   else
    echo " el pid es MAS CHICO, siga intentando"
  fi
   #let intentos++  tambien se puede contar usando el let VAR++
   let intentos=intentos+1
fi
done  
