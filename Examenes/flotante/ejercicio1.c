#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
pid_t pid;
int i;
for (i=0; i<3; i++){
  pid = fork();
 if (pid == 0){
   if( i == 0){
     printf("hijo 1\n");
     system("ls -la");
     }
   if (i == 1){
    printf("hijo 2\n");
    for( int j=0; j<11; j++){
       printf("imprimiendo %d\n", j);
       }
     }
   if(i == 2){
     printf(" hijo 3\n");
     printf("pid del hijo %d\n", getpid());
     printf("pid del padre %d\n", getppid());
     }
    
  } else {
    break;
    }

}
return 0;
}
