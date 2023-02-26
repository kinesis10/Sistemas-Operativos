#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>
#include <unistd.h>

sem_t s;                                // declaro la variable s de tipo sem_t
static void * funcion1(void* arg);
static void * funcion2(void* arg);

int main(void)
{
  pthread_t hilo1, hilo2;

  sem_init(&s, 0, 1);                           //inicio el semaforo haciendo referencia a s y con 0 y 1

  pthread_create(&hilo1,NULL, *funcion1, NULL);
  sem_wait(&s);
  sleep(1);
  pthread_create(&hilo2, NULL, *funcion2, NULL);

  pthread_join(hilo1, NULL);
  pthread_join(hilo2, NULL);
  return 0;
}
static void * funcion1(void* arg){
  printf("Primero aprendo lenguaje C\n");
  sem_post(&s);
}
static void * funcion2(void* arg){
  printf("Segundo tratare de aprender semaforos\n");
}
