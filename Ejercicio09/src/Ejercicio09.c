/*
 ============================================================================
 Name        : Ejercicio09.c
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
		printf("Introduce el tamaño del primer array (1-30): ");
		fflush(stdout);
		scanf("%d",&tam);
	}while((tam<=0||tam>MAX));

	puts("Introduce los datos del primer array: ");
	pedirVector(numeros,tam);

	puts("Los datos introducidos son: ");
	mostrarVector(numeros,tam);

	printf("\n");
	puts("Vector al reves:");
	copiarReves(numeros,tam);
	mostrarVector(numeros,tam);
}
