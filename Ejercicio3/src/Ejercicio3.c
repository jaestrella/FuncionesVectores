/*
 ============================================================================
 Name        : Ejercicio3.c
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
	int inicio,fin;
	int numeros[MAX];

	do{
		printf("Introduce el tamaño del array 1-%d: ",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0||tam>MAX);

	printf("Introduce el inicio del rango: ");
	fflush(stdout);
	scanf("%d",&inicio);

	printf("Introduce el final del rango: ");
	fflush(stdout);
	scanf("%d",&fin);

	puts("Introduce el vector: ");
	pedirVector(numeros,tam);

	printf("Los elementos que estan entre %d y %d son: ",inicio,fin);
	valoresRango(numeros,tam,inicio,fin);
}
