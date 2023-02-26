#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  pid = fork();
  if(pid == -1){
     printf("error en la creacion del fork");
     exit;
     }
  else if(pid == 0){
     printf("Soy el hijo y mi piod = %d\n",getpid());
     system("/bin/ls -la");
	}else{
	    printf("Soy el padre, mi pid = %d\n",getpid());
 	    system("mkdir misDocumentos");
	    char command[128];
            sprintf(command, "echo %d >> misDocumentos/procesos\n",getpid());
	    system(command);
            }
}
