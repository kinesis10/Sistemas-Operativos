#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  int i, cant;
 
  printf("ingrese la cantidad de fork  que quiere ejecutar\n");
  scanf("%d",&cant);
  printf("***Solo el hijo puede crear procesos***\n");
  for(i = 0; i < cant; i++){
      pid = fork();

     printf("i= %d, pid = %d, ppid= %d\n",i, getpid(), getppid());
     if(pid != 0){
          break;

          }     
      }
  return 0;
}
