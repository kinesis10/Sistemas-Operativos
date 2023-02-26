#!/bin/bash
mkdir /practicas/documentos_txt/
archivosSh=$(find /documentos/directorio1 -type d -name "*sh")
archivosTxt=$(find /documentos/directorio1 -type f -name "*.txt")

ln -s /documentos/practicas/archivosTxt /documentos/practicas/documentos_txt/


