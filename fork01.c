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
  
  //Se creal los procesos diferentes
  id=fork();
  
  if(id>0){
    printf("\n\nSoy el proceso PADRE ID = %d\n\n", getpid());
  }
  else if(id==0){
    printf("\n\nSoy el proceso PADRE ID = %d\n\n", getpid());
    printf("\n\nSoy el proceso HIJO ID = %d\n\n", getpid());
  }
  else{
    printf("\n\n Hubo error en la creacion del FORK() \n\n");
  }
 
  
  
  return 0;
  

}