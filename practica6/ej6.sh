#!/bin/bash

cant=$(uptime | awk '{print $4}' | wc -l)
horEnc=$(uptime | awk '{print $3}')
promCarga=$(uptime | awk '{print $9 $10}')
echo " cantidad de usuarios conectados $cant"
echo "hora encedido $horEnc"
echo $promCarga $horEnc $promCarga
