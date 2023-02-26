#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t pid;
  int cant;
  int op, a, b, c;
  printf(" ingrese la cantidad de fork que quiere ejecutar (no mas de 4)\n");
  scanf("%d", &cant);
  printf("que desea hacer?, elija una opcion\n");
  printf("1) imprimir propcesos padres e hijos\n");
  printf("2) imprimir propcesos hijos\n");
  printf("3) imprimir propcesos padre\n");
  scanf("%d", &op);
  switch (op) {
	case 1: 	
	   for(int i= 0; i< cant; i++){
   	      pid = fork();
   	      printf("i = %d, pid = %d, ppid = %d\n", i, getpid(), getppid());
   	     }
	   break;
	case 2:
	   printf("**solo el hijo crea procesos***\n");
	   for(int i= 0; i< cant; i++){
	     pid = fork();
	     printf("i = %d, pid hijo = %d, ppid = %d\n", i, getpid(), getppid());
	     if(pid == 1){
		break;
		}
	    //break;	
	     }
	   break;
	case 3:
	   printf("***Solo el padre crea procesos**");
	   for(int i= 0; i < cant; i++){
	      pid = fork();
	      printf("i = %d, pid =%d, ppid =%d\n", i, getpid(), getppid());
	      if(pid == 0){
		break;
		}		
	     }	
	  //break;
    }

return 0;
}
