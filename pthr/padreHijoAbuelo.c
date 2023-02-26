#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
pid_t pid;

pid = fork();

if ( pid == -1){
  printf("error");
  exit;
  } else {

    if ( pid == 0 ){
    printf("soy el hijo y mi pid es, %d\n", getpid());
      }
    else {
   printf("soy el padre mi pid es : %d\n", getpid());
   printf("soy el abuelo mi pid es : %d\n", getppid());
      }
    }
return 0;
}
