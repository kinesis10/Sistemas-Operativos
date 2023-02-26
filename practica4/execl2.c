#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  system("clear");
  int pid;
  printf("\n");
  pid = fork();
  if(pid == -1){
   printf("error en la creacion del fork");
   exit(-1);
   }
   if(pid == 0){
   printf("\n");
   printf("soy el hijo, mi pid es = %d",getpid());
   system("rm -r carpetaCreada");
   system("mkdir carpetaCreada");
   system("ls");
   printf("\n");
   }else{
        sleep(1);
	printf("soy el padre, y mi pid = %d\n", getppid());
        execl("/bin/ps", "ps", NULL);
	}
return 0;
}



