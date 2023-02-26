#!/bin/bash

#2)Realice un script en bash que muestre la cantidad de memoria usada. Luego cree una tarea programada para que
#se ejecute este script todos los dias lunes a las 15:00 Hs (dejarla comentada en el mismo script)


mem=$(free | grep Memoria | awk '{print $3}')
echo " la memoria usada es $mem"

