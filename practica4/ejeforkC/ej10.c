#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
pid = fork();
  if(pid == 0){
     printf("Soy el hijo, mi pid es = %d\n", getpid());
     system("/bin/ls -la");
     }else{
	  printf("Soy el padre, mi pid es= %d\n", getpid());
          }

while(1);
}
