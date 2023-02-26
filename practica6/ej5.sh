#!/bin/bash
#Hacer un script que genere un backup los días hábiles de la semana a las 0 horas(0 0 2-5), del
#directorio prácticas, dejando en archivos separados las carpetas TP1, TP2 y TP3,
#además el nombre del archivo de backup debe tener concatenada la fecha de realización.

DIA=$(date +%Y-%m-%d-%H%M%S)
DESTINO="/home/pablo/Escritorio/SO/practica6/TP1"
ORIGEN="$HOME/Escritorio/SO/practica6/tp1ej.txt"
tar -cvzf $DESTINO/backup-$DIA.tar.gz $ORIGEN

