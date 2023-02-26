#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
//#include <semaphore.h>

sem_t sem;
pthread_t hilo1, hilo2;				// declaro lo hilos de tipo pthread

static void * funcion1(void* arg);			//declaro las funciones que se van a ejecuta
static void * funcion2(void* arg);

int main() 
{
  pthread_t hilo1, hilo2;
  sem_init(&sem, 0, 1);
  pthread_create(&hilo1, NULL, &funcion1,NULL);  // creo ambos hilos
  pthread_create(&hilo2, NULL, &funcion2,NULL);

  pthread_join(hilo2,NULL);
  pthread_join(hilo2,NULL);

  return 0;

}
void funcion1(){
  
  printf("Segundo, tratare de aprender semaforos\n"); 
}
void funcion2(){
  
  printf("Primero aprendo lenguaje C\n");
}



