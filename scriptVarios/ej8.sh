#Implementar con un script el punto 6 de la parte B de la practica 1

#!/bin/bash
cut -d ":" usuarios -f 3,4,7 >> /etc/documentos/practicas/tp2/perfil.txt
