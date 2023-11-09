/*
 ============================================================================
 Name        : Gasolina.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	int tipo;
	int litros;

	printf("1.Repostar Gasoil.\n");
	printf("2.Repostar Gasoil Plus.\n");
	printf("3.Repostar Sin Plomo 95.\n");
	printf("4.Repostar Sin Plomo 98.\n");
	printf("5.Salir.\n");

	//printf("Introduce el tipo de combustible: ");
	fflush(stdout);
	scanf("%d",&tipo);

	printf("Introduce la cantidad de litros: ");
	fflush(stdout);
	scanf("%d",&litros);

	//printf("%.3f",calculaImporte(tipo,litros));

	switch(tipo){
		case 1:printf("Total a pagar %.3f",calculaImporte(tipo,litros));break;
		case 2:printf("Total a pagar %.3f",calculaImporte(tipo,litros));break;
		case 3:printf("Total a pagar %.3f",calculaImporte(tipo,litros));break;
		case 4:printf("Total a pagar %.3f",calculaImporte(tipo,litros));break;
		case 5:break;
	}

}
