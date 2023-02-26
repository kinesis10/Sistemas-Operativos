#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Hacer una rutina en lenguaje C, que genere el siguiente árbol de procesos, donde el padre debe ejecutar un
//scripts de Linux (función system), el hijo 1 debe crear a su vez 3 hijos (H11, H12, H13 y mostrar el pid de
//cada uno), y el hijo 3 debe ejecutar un comando usando la función execl.

int main()
{
  int i;
  pid_t pid, pid2;
   
   pid = fork();
   
    if(pid == 0){
     
         for(i= 0; i< 3; i++){
 	    pid2 = fork();
            if(pid2 == 0 ){
               printf("el pid de %d es %d\n", i, getpid());

             }else{
		 break;
		  }
             
	     if( i == 2){
	         printf("ejecutando execl\n");
		 execl("/bin/ls", "ls", NULL);
		}
	   }
	 
          
     }else{
	 //  printf("aca ejecuta un system,\n");
	   system("./prueba.sh");
	   }
return 0;
}
