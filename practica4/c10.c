#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
  pid_t pid = fork();
  if(pid == -1){
   printf("error");
   exit(1);
   }
  if(pid == 0){
   printf(" Pid del hijo %d\n",getpid());
   system("ls -l");
   } else {
        printf("pid del padr %d\n", getpid());
	  }

return 0;
}
