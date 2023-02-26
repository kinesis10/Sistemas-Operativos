#8) Hacer un scripts que permita chequear cada 5 segundos el estado de la memoria libre, en caso que la misma llegue
#a un determinado valor ingresado como parámetro al ejecutar el scripts, dispare una alerta en el servidor (En este caso
#un mensaje por pantalla).

echo "*** chequeando memoria..."
usado=$(free | awk '{print $3'} | tail -2 | head -1)
total=$(free | awk '{print $2'} | tail -2 | head -1)
let porc=usado*100/total
echo $porc
if [[ $porc -gt $1 ]]; then
  echo "Alerta, el porcentaje de memoria es critico"
  else
    echo "todo va bien"
fi
sleep 5
bash ./ej8.sh $1


