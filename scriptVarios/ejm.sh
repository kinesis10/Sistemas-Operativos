#!/bin/bash

comparar si es un archiovo o dir

recorrer el directorio con *.txt
for i in $1/*.txt
guardar
cp $i aux
rm -r aux 

