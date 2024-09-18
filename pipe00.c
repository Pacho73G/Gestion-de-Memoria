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
Se puede comunicar entre procesos con la funcion PIPE(). Crea una tuberia
que envia datos,etc de forma unidireccional entre el PADRE y el HIJO
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(){
  pid_t proceso;
  int id,aux;
  printf("\n\n \t -->PROGRAMA PRINCIPAL<-- \n\n");
  printf("\n\n \t -->Creacion de PIPES entre procesos<-- \n\n");

  //se crea el mensaje a enviar
  char sms[]= "Hola, te envio este mensaje profesional en formacion";
  //se crea un bus de memoria para el envio
  char lectorMensaje[80]; 
  
  //se creal un arreglo para identificar el INICIO y FIN del PIPE
  int tuberia[2];
  //Se crea el PIPE
  pipe(tuberia);
  
  
  
  if((proceso=fork()) >0){
    printf("\n\n SECCION DEL PADRE \n\n");
    //cierre de salide tuberia
    close(tuberia[1]);
    //se lee el mensaje enviado
    aux=read(tuberia[0], lectorMensaje,sizeof(lectorMensaje));
    
    printf("\n\n MENSAJE RECIBIDO:\n \t %s \n",lectorMensaje);

  }
  else if((proceso=fork()) ==0){
    printf("\n\n SECCION DEL HIJO \n\n");
    //cierre de tuberia
    close(tuberia[0]);
    //se escribe el mensaje 
    write(tuberia[1], sms,(strlen(sms)+1));
    //se finaliza el proceso
    exit(0);
  }
  else{
    printf("\n\n Hubo error en la creacion del FORK() \n\n");
  }

  printf("\n\n FIN DEL PROGRAMA.!!! \n\n");
  
  return 0;
  

}