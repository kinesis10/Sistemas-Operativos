#reccorrer un directorio  por extencion .txt, asignarle permisos de escritura
# a otros.

#!/bin/bash

for i in ../tp1/*.txt
	echo $i
	chmod o+w $r
done

