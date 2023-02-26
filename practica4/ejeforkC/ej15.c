#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int i, j;


  for(i = 0; i < 3; i++){
   
    if( fork() == 0){
      if(i == 0){
         for(j = 0; j < 3; j++){
            if(fork() == 0){
               break;
             }
             printf(" el píd de los nietos es %d\n", getppid());
          }
      if(i == 2){
         /* excl ejecuto otro script*/
         }
        }
      /*system echo " primer script"*/
      break;
      }
    }
  while(1);
}

