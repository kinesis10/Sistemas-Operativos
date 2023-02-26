#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
  pid_t pid;
  pid = fork();
  if( pid == -1){
     printf("error");
     exit(-1);
     }
  if(pid == 0){
   printf("Soy el hijo, %d, mi padre es; %d\n", getpid(), getppid());
   } else {
	 printf("soy el Padre, %d, mi padre es %d,\n", getpid(), getppid());
    	 }


return 0;
}
