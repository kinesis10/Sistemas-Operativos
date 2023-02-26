#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// crear dos procesos y ejecutar algo en alguno

//int_t pid

int main()
{
  system("clear");
  int pid;
  pid = fork();

  if(pid == -1){
  printf("error en la creacion del fork\n");
  exit(-1);
  }
  if(pid == 0){
     printf("Soy el hijo\n");
     system("ls .");
     }else{
         printf("soy el padre\n");
         execl("/bin/ls", "ls", "/usr/", NULL);
	 }
return 0;	
}
