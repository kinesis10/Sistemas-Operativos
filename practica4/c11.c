#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  pid_t pid;
  pid = fork();
  if(pid == -1){
   printf("error\n");
   exit;
   }
  if(pid == 0){
   printf(" hijo %d\n", getpid());
   execl("/bin/ls", "la",NULL);
   printf("\n");
   } else {
	printf("padre %d\n", getpid());
  	system("rm -r misDocumentos");
	system("mkdir misDocumentos");
	char command[128];
	   sprintf(command, "echo %d >> misDocumentos/procesos\n");
	system("command");
 	 }  

}carlos , susana morlio 
