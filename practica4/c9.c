#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  for(int i= 0; i < 2; i++){
     pid = fork();
     if(pid == -1){
        printf("error");
        exit(-1);
      }
     if(pid == 0){
       printf("hijo %d\n", getpid());
       printf(" padre,%d\n", getppid());
      } else {
      	    printf("Padre del Padre %d\n", getppid());
	    }
     printf("proceso %d creado\n", i);
   }
while(1);
return 0;
}
