#!/bin/bash
echo Chequeando memoria
por=$(free -m | grep Memoria | awk '{print ($3/$2)*100}')
if [[ $por -gt $1 ]]; then
  echo "la memoria esta critica"
  else
    echo "todo esta bien mem actual : $por"
fi
sleep 5
bash ./ej81.sh $1
