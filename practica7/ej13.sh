#!/bin/bash

#Hacer un script que cree el directorio    ^`^|edirectory   ^`^} y desde este crear enlaces
#simblicos a todos los directorios que se encuentran adentro de la carpeta practica
#(Ej. TP1, TP2, etc). Ademas crear la carpeta    ^`^|efiler   ^`^} y desde aqu       creari
#crear 2 enlaces mbolicos a los ejercicios 1 y 2 de la practica TP2.

mkdir /documentos/practicas/tp7/efiler
mkdir /documentos/practicas/tp7/edirectory

ln -s /documentos/practicas/ /documentos/practicas/tp7/edirectory

ln -s /documentos/practicas/tp2/ej1.sh ej2.sh /documentos/practicas/tp7/efiler

#para crear enlaces simbolicos 'ln -s /rutaAbsoluta/nombredelArchOrigen /rutaAbsoluta/nombreDestino'
