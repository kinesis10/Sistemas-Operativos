#!/bin/bash

mkdir documentos_txt 
TXT=$(find . -type f -name "texto*")
for i in $TXT; do
  sed -i '1d' $i
done
ln -s dir1/ documentos_txt

