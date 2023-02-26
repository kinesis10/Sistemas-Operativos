#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int pid;
  pid=fork();

  if ( pid == 0 )
  {
    printf("%s %d\n", "soy el hijo si estoy en el proseso hijo, y me id es :", getpid());
  }else{
      printf("%s %d\n", "soy el padre si estoy en el proceso padre, y mi id es :", getpid());
  }


return 0;
};
