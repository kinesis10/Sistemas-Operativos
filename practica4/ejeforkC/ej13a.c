#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i, cant;
  pid_t pid;
  printf("Ingrese la cantidad de Fork que quiere crear\n");
  scanf("%d", &cant);
  printf("Solo el padre creara Procesos\n");

  for (i = 0; i < 4; i++){
    if (fork() == 0){
      printf("Soy el proceso padre %d y solo yo creo hijos%d\n", getppid(), getpid());
      break;
    

     }

  }
while(1);
};

