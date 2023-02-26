#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
int i;
pid_t pid;
for(i=0; i<3; i++)
  if( fork() == 0)
    break;
  printf("i :%d: hijo: %d. padre: %d\n", i, getpid(), getppid());

return 0;
}
