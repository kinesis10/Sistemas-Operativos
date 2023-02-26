#!/bin/bash
echo "***4)resuelto con  free***"
TOTAL=$(free | awk '{print $2}' | head -2 |tail -1) 
USADA=$(free | awk '{print $3}' | head -2 |tail -1)
LIBRE=$(free | awk '{print $4}' | head -2 |tail -1)
echo "Total de memoria: $TOTAL" > 'informe de RAM'
echo "Memoria usada : $USADA" >> 'informe de RAM'
echo "Memoria libre: $LIBRE" >> 'informe de RAM'
