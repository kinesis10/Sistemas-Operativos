#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i, j, k;
  for(i = 0; i < 3; i++){                /*creo 3 hijos con un for*/
     if(fork() == 0){			 /*con lo comparo con 0 xq no quiero que los hijos sigan creando procesos*/
       if(i == 1){			 /*selecciono al hijo del medio para crear dos procesos hijos*/
         for(j = 0; j < 2; j++){         /*cre 2 hijos con un for */
             if(fork() == 0){            /*solo quiero que el padre cree hijos por eso filtro con 0 y cancelo su ejecucion,idemanterior*/
		if(j == 1){
		   for(k = 0; k < 2; k++){    /*quiero que el ultimo hijo cree secuencalmente hojs de manera lineal*/
		      if(fork() != 0){        /*comparando con el !0 no dejo que el padre cree.. solo los hijos*/
			break;		     /*interrumpo la ejecucion de cumplirse la condicion*/
			}	
		      }	
		   }            
                break;
               }
		
             }
        }
       break;
        }
    }
  while(1);                                  /*genero con un while una ejecucion infinita para poder ver los procesos en ejecucion*/

}
