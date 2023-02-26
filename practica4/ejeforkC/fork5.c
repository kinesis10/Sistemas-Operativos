#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid1, pid2;
  switch(pid1 == fork()){
    case -1: 
    printf("error a crear el proceso\n"); 
    exit(1);
    case 0: 
    printf("Soy el hijo mi pid = %d y el pid de mi padre = %d\n", getpid(), getppid()); 
    for(int i= 0; i<3; i++){
        pid1 = fork();
        if(pid2 == 0){
          printf("pid = %d\n",getpid());
          if(i == 2){
             execl("/bin/ls", "ls", NULL);
             }
          }
        }
    default: 
    printf(" Soy el padre, mi pid es = %d y mi shell es = %d\n", getpid(), getppid());
    system("./prueba.sh"); 
  }
return 0;
}

