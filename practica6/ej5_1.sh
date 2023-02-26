#!/bin/bash
#Hacer un script que genere un backup los días hábiles de la semana a las 0 horas(0 0 2-5), del
#directorio prácticas, dejando en archivos separados las carpetas TP1, TP2 y TP3,
#además el nombre del archivo de backup debe tener concatenada la fecha de realización.


FECHA=$(date | awk '{print $5}')
ORIGEN=$($HOME/Escritorio/SO/practica5/ej4.sh)
DESTINO=$($HOME/Escritorio/SO/flotante /BK)
tar -cvzf $DESTINO-$FECHA.tar.gz $ORIGEN

