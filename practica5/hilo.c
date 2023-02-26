
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>
#include <unistd.h>

sem_t s;
void * funcion1(void *arg) {
  printf("H2\n");
  sem_post(&s);
  return NULL;
}

int main(int argc, char *argv[])
{
  sem_init(&s,0 ,0);
//  printf("imprimira primero H2\n");
  
  pthread_t hilo;
  pthread_create(&hilo, NULL, funcion1, NULL);
  sem_wait(&s);   // esperara por el H2
  printf("H1\n");
  return 0;
}



