/*
 ============================================================================
 Name        : Ejercicio01.c
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
	int n,busca,posicion;
	int numeros[MAX];

	do{
		printf("Introduce el tamaño del array (1-30): ");
		fflush(stdout);
		scanf("%d",&n);
	}while(n<=0||n>MAX);

	printf("Introduce los datos: ");
	pedirVector(numeros,n);

	printf("Los datos introducidos son: ");
	mostrarVector(numeros,n);

	printf("\nIntroduce un numero a buscar: ");
	fflush(stdout);
	scanf("%d",&busca);

	posicion=posicionPrimerElemento(numeros,n,busca);
	if(posicion==-1){
		printf("Elemento %d no encontrado",busca);
	}else{
		printf("Elemento %d encontrado en la casilla %d",busca,posicion);
	}

}
