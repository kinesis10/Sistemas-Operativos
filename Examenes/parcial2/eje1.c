#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
pid_t pid;
int i, j;
for(i = 0; i < 3; i++){
  pid = fork();
  if(pid == 0){
    break;
  }
}
if(i == 0){
  system("ls .");
}
if(i == 1){
  for(j = 0; j < 10; j++){
    printf("%d\n", j + 1);
  }
}
if(i == 2){
  printf("mi pid es : %d, el de mi padre es : %d", getpid(), getppid());
}
return 0;
  
};
