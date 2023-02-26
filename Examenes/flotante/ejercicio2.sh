#!/bin/bash

if [[ -d "documentos_txt" ]]; then
  rm -r documentos_txt
fi
mkdir documentos_txt
SH=$(find . -type f -name "*.sh")
TXT=$(find . -type f -name "*txt")
for i in $TXT; do
  sed -i '1d' $i
done
ln -s /$HOME/Escritorio/SO/flotante/p4/$SH /$HOME/Escritorio/SO/flotante/p4/documentos_txt
