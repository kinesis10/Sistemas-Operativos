
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i;
  for(i = 0; i < 4; i++)
    fork();
    printf("soy un proceso\n");
    while(1);
  
}
