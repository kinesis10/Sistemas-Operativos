#!/bin/bash

#Escribir un script que modifique sobre un archivo cualquiera pasado por parámetros el dueño, el
#grupo y le deje solo lectura a otros.

if [[ $# -eq 0 ]]; then
  echo "Debe pasar un Parametro"
  exit
fi
if [[ -f $1 ]]; then
  sudo  chown root $1
  sudo chgrp	root $1
  sudo chmod 774 $1
else
  echo "debe ser un archivo"
fi
#7) chmod u+t nombreArchivo    //modificado el nombre por root o por el dueño del archivo
#utilizaremos +t para activar el bit de permanencia, g+s para activar el de setgid y u+s para hacer lo mismo con el de setuid; si queremos #resetearlos, utilizamos un signo `-' en lugar de un `+' en la línea de órdenes.
