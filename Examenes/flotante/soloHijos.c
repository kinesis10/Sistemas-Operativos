
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i, pid;
for (i = 0; i < 3; i++){
  pid = fork();
  if( pid == 1){
      break;
	}
      printf("id n°:%d, hijo: %d, padre %d\n", i, getpid(), getppid());
	
  } 



return 0;
}
