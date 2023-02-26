#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  int i, j, cant;
 
  printf("ingrese la cantidad de fork  que quiere ejecutar\n");
  scanf("%d",&cant);
  printf("***Solo el hijo crea procesos en forma lineal***\n");
  for(i = 0; i < cant; i++){
      pid = fork();
	 
      printf("i= %d, pid = %d, ppid= %d\n",i, getpid(), getppid());
      if(pid != 0){
          break;
	  if(i == 0){
	      for(j = 0; j < cant; j++){
                   if(pid != 0){
		       break;
		       }
		    
		   }
	      }
          }     
      }
  return 0;
}


