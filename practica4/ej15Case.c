
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid1, pid2;
  pid1 = fork();
  switch(pid1){
    case -1: 
    printf("error a crear el proceso\n"); 
    exit(1);
    case 0:
    	for(int i= 0; i< 3; i++){
        	pid2 = fork();
          	if(pid2 == 1){
			break;
                 	
                }else{
	         	printf("pid = %d\n", getpid());
		    	if(i == 2){
			   execl("/bin/ls", "ls", NULL);
			  }
		        }
        }
    case 1: 
    	printf(" Soy el padre, mi pid es = %d y mi shell es = %d\n", getpid(), getppid());
     	system("./prueba.sh"); 
  }
while(1);
}
