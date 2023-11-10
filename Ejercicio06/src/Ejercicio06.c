/*
 ============================================================================
 Name        : Ejercicio06.c
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
	int tam,busca,posicion;
	int numeros[MAX];

	do{
		printf("Introduce el tamaño del array (1-30): ");
		fflush(stdout);
		scanf("%d",&tam);
	}while(tam<=0||tam>MAX);

	puts("Introduce los datos: ");
	pedirVector(numeros,tam);

	printf("Los datos introducidos son: ");
	mostrarVector(numeros,tam);

	printf("\nIntroduce un numero a buscar: ");
	fflush(stdout);
	scanf("%d",&busca);

	posicion=posicionPrimerElemento(numeros,tam,busca);
	if(posicion==-1){
		printf("Elemento %d no encontrado",busca);
	}else{
		printf("Elemento %d encontrado en la casilla %d\n",busca,posicion);
	}

	printf("Los mayores al numero %d incluido el son: ",busca);
	mostrarMayores(numeros,tam,busca);

}
