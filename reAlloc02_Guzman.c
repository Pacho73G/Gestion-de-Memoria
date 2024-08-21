/****************************************************************************
Pontificia Universidad Javeriana
Autor: Francisco Javier Guzman Villegas
Fecha: 21/08/2024
Materia: Sistermas Operativos
Tema: Gestion de Memoria
Topico: Reserva de memoria en la funcion ralloc().
La funcion realloc redimensionar un bloque de memoria.
devuelve un puntero al nuevo bloque de memoria.
****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr=NULL; // Inicia el puntero como NULL

    // Asignacion de un bloque para 5 enteros usando realloc
    arr=realloc(arr, 5 * sizeof(int));
    if(arr==NULL){
        printf("Error en realloc\n");
        return 1;
    }

    // Inicializar el arreglo
    for (int i=0;i<5;i++) {
        arr[i]=i+1;
    }

    // Redimensionar el bloque para contener 10 enteros
    arr=realloc(arr,10*sizeof(int));
    if(arr==NULL){
        printf("Error en realloc\n");
        return 1;
    }

    // Inicializar los nuevos elementos
    for(int i=5;i<10;i++){
        arr[i]=i+1;
    }

    // Imprimir los valores
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
}
