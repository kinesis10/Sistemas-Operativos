#!/bin/bash
echo "***ejercicio resuelto con vmstat***"
EspCPU=$(vmstat | awk '{print $1}' | tail -1)
dormidos=$(vmstat | awk '{print $2}' | tail -1)
swapin=$(vmstat | awk '{print $7}' | tail -1)
swapon=$(vmstat | awk '{print $8}' | tail -1)

echo "procesos esperano cpu: $EspCPU"
echo "procesos dormidos : $dormidos"
echo "memoria intercambiada desde el disco: $swapin"
echo " memoria intercambiada hacia el disco: $swapon"


