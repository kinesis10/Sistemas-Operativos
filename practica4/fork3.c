#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int i;
for (i = 0; i < 4; i++)
  if (fork() == 0)
    break;
printf("i = %d, pid = %d, ppid = %d\n", i, getpid(), getppid());
while(1);
};
