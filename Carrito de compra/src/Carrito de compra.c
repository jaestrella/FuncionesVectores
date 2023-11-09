/*
 ============================================================================
 Name        : Carrito.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


float codigos(int codigo){
	if (codigo==1){
		return 9.90;
	}
	else if (codigo==2) {
		return 12.90;
	}
	else if (codigo==3) {
		return 20.00;
	}
	else {
		return 29.90;
	}
}

float carrito(int codigo,float total,int unidades){
	total=total+(codigos(codigo)*unidades);
	return total;
}

int main(void) {
	int opcion=0;
	int unidades=0;
	int totalunidades=0;
	float total=0;
	float subtotal=0;
	do {
	puts("Selección de articulos:") ;
	puts("1-Añadir teclado: 9.90");
	puts("2-Añadir ratón: 12.90");
	puts("3-Añadir monitores: 20.00");
	puts("4-Añadir mandos: 29.90");
	puts("0-Salir");
	puts("¿Qué quiere añadir (1-4)?");
	fflush(stdout);
	scanf("%d",&opcion);
	if (opcion==1){
		printf("¿Cuantas unidades que quieres de teclado?");
		fflush(stdout);
		scanf("%i",&unidades);
	}
	else if (opcion==2){
		printf("¿Cuantas unidades que quieres de ratón?");
		fflush(stdout);
		scanf("%i",&unidades);

	}
	else if (opcion==3){
		printf("¿Cuantas unidades que quieres de monitor?");
		fflush(stdout);
		scanf("%i",&unidades);

		}
	else if (opcion==4){
		printf("¿Cuantas unidades que quieres de mando?");
		fflush(stdout);
		scanf("%i",&unidades);

		}
	else {
		puts("Opción no válida");
	}
	totalunidades=totalunidades+unidades;
	total=carrito(opcion,total,unidades);

	printf("Hay %d unidades en el carrito con un importe de %.2f",totalunidades,total);
	}while(opcion!=0);
	return EXIT_SUCCESS;
}
