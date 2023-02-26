#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i,j,cant;
  pid_t pid;
  printf("solo un hijo creara procesos\n");
  printf("Ingrese la cantidad de fork que desea crear\n");
  scanf("%d",&cant);
  for(i = 0; i < cant; i++){
    pid = fork();
    if(pid != 0){
      printf("mi pid es %d y mi ppid es %d\n", getpid(), getppid()); 
      break;
    }    
  
  }   
  while(1);
}
