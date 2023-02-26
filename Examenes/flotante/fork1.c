#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){


int pid;


for (int i=0; i<3; i++){
  
  pid = fork();
  printf("soy un proceso\n");
    }

return 0;
}
