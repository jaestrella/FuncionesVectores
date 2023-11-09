/*
 ============================================================================
 Name        : Ejercicio02.c
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
	int tope;
	int numeros[MAX];

	do{
		printf("Introduce el tamaño del array 1-%d: ",MAX);
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0||tam>MAX);

	puts("Introduce el vector: ");
	pedirVector(numeros,tam);

	printf("Introduce el numero a comprobar: ");
	fflush(stdout);
	scanf("%d",&tope);
	printf("Los elementos menores a %d son:",tope);
	mostrarMenoresQue(numeros,tam,tope);
}

