#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
pid_t pid;
for (int i=0; i<3; i++){
  pid=fork();
  if (pid == 0){
    printf("hijo %d pid: %d\n", i, getpid());
    } else {
	break;
	}
  }

return 0;
}
