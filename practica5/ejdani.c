#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
//#include <unistd.h>
//#include <sys/types.h> para tipo de dato pid_t
//-pthread
//sudo apt install build-essential

sem_t sem;
pthread_t hilo1,hilo2;
int i,contador=0;
static void * funcion_hilo_1(void* arg);
static void * funcion_hilo_2(void* arg);

int main(){

pthread_create(&hilo1, NULL,funcion_hilo_1,NULL);
pthread_create(&hilo2, NULL,funcion_hilo_2,NULL);

sem_init(&sem, 0, 0); //creo al semaforo en 0, y es de hilo, por eso 0
pthread_join(hilo2,NULL);
pthread_join(hilo1,NULL);

printf("contador %d\n",contador);
return 0;
}

static void * funcion_hilo_1(void* arg){
for (i=0;i<10000;i++){
printf("function1 contador %d\n", contador);
contador++;
//sleep(1)
}

}

static void * funcion_hilo_2(void* arg){
sem_wait(&sem); //espera que valga 1
for (i=0;i<10000;i++) {
printf("function2 contador %d\n",contador);
contador--;
}
}
