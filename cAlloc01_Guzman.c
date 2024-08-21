/****************************************************************************
Pontificia Universidad Javeriana
Autor: Francisco Javier Guzman Villegas
Fecha: 13/08/2024
Materia: Sistermas Operativos
Tema: Gestion de Memoria
Topico: Reserva de memoria en la funcion calloc().
La funcion calloc reserva un espacio de memoria de tamaño requerido.
Los espacios de igual tamaño y de memoria contigua. 
La asignacion es dinamica, y util para complejas estructuras de datos.
Inicialmente los bloques contiguos que devuelve son inicializados en 0.
devuelve un puntero señalado el inicio del espacio de memoria reservado.
****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(){
  /*se declaran las variables y punteros*/
  int *p1=calloc(4,sizeof(int));//Asignacion de vector de 4 tamaño int
  int *puntero=calloc(10,sizeof(int));//bloque de memoria 10 int
  int *p3=calloc(5,sizeof *p3);//bloque de memoria 5 int

  printf("Construccion y calculo de la secuencia de los primeros 10 terminos\n");
  
  //Se recorre el array "puntero" para asignar valores y mostrar la secuencia
  for(int i=0;i<10;i++){
    *(puntero+i)=i; //Se asigna el valor de 'i' en la posición 'i' del array "puntero"
    printf("El valor de la secuencia es: %d \n",*(puntero+i));  
  }

  /*Liberacion de memoria*/
  free(p1); //Libera el bloque de memoria asignado a "p1"
  free(puntero); //Libera el bloque de memoria asignado a "puntero"
  free(p3); //Libera el bloque de memoria asignado a "p3"

  return 0;
}