/*
 ============================================================================
 Name        : Ejercicio05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 30

int main(void) {
	int tam;
	int numeros[MAX];

	do{
		printf("Introduce el tamaño del array 1-%d: ",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0||tam>MAX);


	puts("Introduce los datos: ");
	pedirVector(numeros,tam);

	puts("Los datos introducidos son: ");
	mostrarVector(numeros,tam);

	printf("\n");
	puts("Los datos movidos una posicion a la derecha son: ");
	rotarDerecha(numeros,tam);
	mostrarVector(numeros,tam);
}
