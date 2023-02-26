#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
int pid;
pid = fork();
printf("%d\n", pid);
printf("soy el padre");
if ( fork() == 0 ) {
   printf("soy  el hijo");
   }


return 0;
}
