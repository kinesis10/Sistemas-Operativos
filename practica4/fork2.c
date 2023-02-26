#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int i;
printf("Solo los hijos crean procesos\n");
for (i = 0;  i < 4; i++)
    
  if (fork() != 0)
    break;
     
printf("i = %d, pid = %d, ppid = %d\n", i, getpid(), getppid());
return 0;
  
    
};
