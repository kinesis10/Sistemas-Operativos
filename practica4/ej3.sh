#!/bin/bash

touch process
var=$(ps aux > process | awk '{print $1, $2}')
echo $var > solousu
tar cvzf poc-usu.tar.gz process solousu

