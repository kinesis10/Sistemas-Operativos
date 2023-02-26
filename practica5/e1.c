#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>
#include <unistd.h>

static void * funcion1(void* arg);
static void * funcion2(void* arg);
//pthread_t hilo1, hilo2;

sem_t s;


int main()
{
  printf("ejercicio 1");

  sem_init(&s,0,1);
  pthread_t hilo1, hilo2;
 

  pthread_create(&hilo1, NULL, *funcion1, NULL);
  pthread_create(&hilo2, NULL, *funcion2, NULL);

  pthread_join(funcion1,NULL);
  pthread_join(funcion2,NULL);

  printf("**fin**");

return 0; 	
}
//declaro funcion 1
void funcion1(void* arg){
  printf("primero aprendo lenguaje C\n");

}

void funcion2(void* arg){
printf("Segundo tratare de aprender semaforos\n");

}
