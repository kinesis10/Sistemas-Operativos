#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
/// utilizare semaforos para que un hilo se ejecute primero y asi poder obtener el contador siempre en 0

#define cantidad 10000
static int contador = 0;

sem_t s;				// declaro la variable s de tipo sem_t

static void * funcion1(void* arg);
static void * funcion2(void* arg);

int main(void)
{
  pthread_t hilo1, hilo2;

  sem_init(&s, 0, 1);				//inicio el semaforo haciendo referencia a s y con 0 y 1

  pthread_create(&hilo1,NULL, *funcion1, NULL);
  pthread_create(&hilo2, NULL, *funcion2, NULL);

  pthread_join(hilo1, NULL);
  pthread_join(hilo2, NULL);
  
  printf("contador = %d\n", contador);
  return 0;
}
static void * funcion1(void* arg){
  int i;
  for(i = 0; i< cantidad; i++){
    sem_wait(&s);
    contador += 1;				// seccion critica
    sem_post(&s);
    }
}
static void * funcion2(void* arg){
  int i;
  for(i= 0; i< cantidad; i++){
      sem_wait(&s);
      contador -=1;// contador= contador - +-1
      sem_post(&s);
     }
}
