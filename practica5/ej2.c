#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


// al ejecutar este programa la variable contador puede o no llegar a 0, ya que ambos hilos al ejecutarce concurrentemente puede empezar uno u 
//otro indistintamente, para soplucional esto de deben usar semaforos

#define cantidad 10000		    // esta variable sera usada por ambos for que va a iterar la cant de veces establecida

static void *  funcion1(void* arg); // declaro las fuciones que voy a ejecutar en cada hilo
static void * funcion2(void* arg);

static int contador = 0; 	   // declaro va variable compartida por ambos hilos por eso es static

int main (void)
{
  pthread_t hilo1, hilo2;	  // declaro los hilos que voy a usar de tipo pthread_t
  
  pthread_create(&hilo1, NULL, *funcion1, NULL);  // con la funcion pth_create creo los hilos correspondientes agregandole los parametros 
  pthread_create(&hilo2, NULL, *funcion2, NULL);  // como el nombre y la fucion a ejecutar.
 
  pthread_join(hilo1, NULL);     //la funcion pthreal_join va alanzar ambos hilos de ejecucion
  pthread_join(hilo2, NULL);
  
  printf("contador = %d\n", contador);
  return 0;
}
// creo las funciones 

static void * funcion1(void* arg)
{
  int i;				// puedo declarar antes la variable i
  for ( i= 0; i< cantidad; i++)
  {
     contador = contador + 1;           // asignacion comun
   }
}
static void * funcion2(void* arg)
{
  for(int i = 0; i < cantidad; i++){   // o puedo declararla dentro del for... como quede mas lindo dependiendo del codigo
     contador -= 1;			// asignacion  mas copada
  }
}

