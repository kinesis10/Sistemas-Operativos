#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
  int pid;
  pid = fork();

  if(pid == -1){
   printf("error en a creacion de fork");
   exit(-1);
   }

  if(pid == 0){
   printf(" Soy el hijo y mi pid es %d\n", getpid());
   system("bash script1.sh");
   printf("\n");
   } else {
        sleep(2);
   	printf("Soy el padre y mi pid es = %d\n", getppid());
        execl("/home/pablo/Escritorio/SO/practica4","./script2.sh",NULL);//no se ejecuta este script
        
        }
return 0;
}
