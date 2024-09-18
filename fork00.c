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
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  //Se creal el proceso hijo con la misma información
  fork();
  
  printf("\n\nHola profesionales en formación \n\n");
}