/****************************************************************************
Pontificia Universidad Javeriana
Autor: Francisco Javier Guzman Villegas
Fecha: 03/09/2024
Materia: Sistemas Operativos
Topico: Introduccion a procesos Fork
Fork: al ser invocado crea 2 procesos. Proceso Padre y proceso Hijo.
Cada uno de estos 2 procesos al ser invocados tienen diferente 
espacio de memoria (2 procesos diferentes), son identicos hasta que
el programador determine lo contrario.
      "EL PROCESO HIJO SIEMPRE TENDRA UN ID=0". Con lo cual , siempre
      podremos identificar el proceso hijo y a su vez enviarle un "PROCESO"
      doferente.
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
  int id;
  printf("\n\nHola profesionales en formación \n\n");
  printf("\n\n \t -->PROGRAMA PRINCIPAL<-- \n\n");
  
  //Se creal los procesos diferentes
  id=fork();
  
  if(id>0){
    printf("\n\n SECCION DEL PADRE \n\n");
  }
  else if(id==0){
    printf("\n\n SECCION DEL HIJO \n\n");
  }
  else{
    printf("\n\n Hubo error en la creacion del FORK() \n\n");
  }
  
  //Se imprimen numeros del 10 al 1
  for(int i=10; i>0; i--)
    printf("->: %d\n",i);
  
 
  printf("\n\n FIN DEL PROGRAMA.!!! \n\n");
  
  return 0;
  

}