#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i, j, cant;
  pid_t pid;

  printf("Solo un hijo crea procesos en forma lineal\n");
  printf("Ingrese la cantidad de fork que quiere crear\n");
  scanf("%d",&cant);
  for(i = 0; i < cant; i++){
    pid = fork();
    if(pid != 0){
        if(i == 0){
           for(j = 0; j < cant; j++){
              if(pid != 0){               
               break;
               } 
              
             }
           }
        break;
        }
     

    }
  while(1); 
}
