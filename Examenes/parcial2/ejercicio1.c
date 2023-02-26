#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int i, j;
printf("Solo los hijos crean procesos\n");
for (i = 0;  i < 3; i++)
    
  if (fork() != 0)
    break;
if (i == 0){
    system("ls .");	
    }
if ( i == 1){
  for (j = 0;  j < 10; j++){
    printf("%d\n", j + 1);
    }
  }
if ( i == 2){
  printf("mi pid es : %d, y el de mi padre es %d\n", getpid(), getppid());
  }
       


return 0;
  
    
};
