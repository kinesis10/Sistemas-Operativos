#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  pid = fork();
  if(pid == -1){
   printf("error");
   exit(-1);
   }
  if(pid == 0){
   printf("Estoy en el proceso hijo\n");
   } else {
        printf("Estoy en el proceso padre\n");
        }

return 0;
}
