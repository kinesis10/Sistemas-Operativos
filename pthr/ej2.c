#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>
#include <unistd.h>

sem_t sem;					// declaro la variable s que es demipo semaphore

void * fun1(void* arg){
printf("h1\n");/// seccion critica, ambos hilos la ban a ejecutar
}

void * fun2(void* arg){
printf("h2\n");			// seccion critica
sem_post(&sem);
}

int main()
{
  sem_init(&sem, 0, 1);		//inicializo la funcion
  pthread_t h1,h2;

  pthread_create(&h2, NULL, *fun2, NULL);
  sem_wait(&sem);		//  aca cuando se inicia el hilo retiene el recurso y lo libera cuando se completa la funcion2 con el post

  sleep(1);
  pthread_create(&h1, NULL, *fun1, NULL);

  pthread_join(h1,NULL);
  pthread_join(h2,NULL);
  
return 0;
}
