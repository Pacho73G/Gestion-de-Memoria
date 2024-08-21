/****************************************************************************
Pontificia Universidad Javeriana
Autor: Francisco Javier Guzman Villegas
Fecha: 13/08/2024
Materia: Sistermas Operativos
Tema: Gestion de Memoria
Topico: Reserva de memoria en la funcion malloc().
La funcion malloc reserva un espacio de memoria de tamaño requerido.
devuelve un puntero señalado al comienzo de la memoria reservada.
****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(){
  /*se declaran las variables y punteros*/
  int *bloque00=malloc(4*sizeof(int));//Asignacion de vector de 4 tamaño int
  int *puntero=malloc(15*sizeof(*puntero));//bloque de memoria 15 int
  /*bucle para llenar los espacios del primer bloque reservado(bloque00)*/
  for(int i=0;i<4;i++){
    bloque00[i]=i*2;
    printf("El valor de memoria reservada bloque00[%d]= %d\n",i,bloque00[i]);  
  }
  /*bucle para llenar los espacios del primer bloque reservado(bloque00)*/
  if(puntero!=NULL){
    *(puntero+8)=9889; //Asignacion de valor 9889 en la posicion 9 del bloque reservado
    printf("El valor de la 9na posicion de puntero es:%d \n",*(puntero+8));  
  }

  /*Liberacion de memoria*/
  free(bloque00);
  free(puntero);
  return 0;
}