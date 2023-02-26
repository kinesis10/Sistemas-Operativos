#!/bin/bash
#usar el cron para mostrar la hora actual cada dos minutos

hActual=$(date | cut -d " " -f5)
# HORA_ACTUAL=$(date | awk '{print $3}'
echo $hActual >> arch||Hora-actual

# 2 **** /home/documentos/practiucas/tp6/horaActual.sh
