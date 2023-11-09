/*
 * funciones.c
 *
 *  Created on: 2 nov 2023
 *      Author: usuario
 */
#include <stdio.h>

void pedirVector(int vector[], int tam){
	int i;
	for (i = 0; i < tam; i++) {
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d",&vector[i]);
	}
}

void mostrarVector(int vector[], int tam){
	int i;
	for (i = 0; i < tam; i++) {
		printf("%d\t",vector[i]);
	}
}

int posicionPrimerElemento(int vector[], int tam, int buscar){
	int i;
	for(i=0;i<tam;i++){
		if(vector[i]==buscar){
			return i;
		}
	}
	return -1;
}

void mostrarMenoresQue(int vector[],int tam, int n){
	int i;
	for(i=0;i<n;i++){
		if(vector[i]<n){
			printf("%d\t",vector[i]);
		}
	}
}

// ejercicio de gasolina

float getPrecio(int tipo){
	if(tipo==1){
		return 1.458;
	}else if(tipo==2){
		return 1.652;
	}else if(tipo==3){
		return 1.537;
	}else
		return 1.637;
}

float calculaImporte(int tipo, float litros){
	if(litros<20){
		return (getPrecio(tipo)*litros)-(0.05*litros);
	}
	if(litros>=20 && litros<35){
		return (getPrecio(tipo)*litros)-(0.08*litros);
	}
	if(litros>=35 && litros<=70){
		return (getPrecio(tipo)*litros)-(0.09*litros);
	}
	return getPrecio(tipo)*litros;
}

//Ejercicio Grupo 3

float facturaCine(int adultos, int child, int cantPalomitas){
	float entradas=5;
	float palomitas=3;
	return (adultos+child)*entradas+cantPalomitas*palomitas;
}


float diaEspectador(int entradasAdulto,int entradasChild, float precioEntradas, int cantPalomitas, float precioPalomitas){
	float totalAdulto=entradasAdulto*precioEntradas;
	float totalChild=entradasChild*precioEntradas;
	float descuentoAdulto=totalAdulto*0.5;
	float descuentoChild=totalChild*0.75;
	float finalAdulto=totalAdulto-descuentoAdulto;
	float finalChild=totalChild-descuentoChild;
	return finalAdulto+finalChild+(cantPalomitas*precioPalomitas);
}

float palomitasDescuento(int entradas, int cantPalomitas,float precioEntradas,float precioPalomitas){
	return entradas*precioEntradas+cantPalomitas*precioPalomitas;
}

float descuento2x1(int entradas, float precioEntradas, int cantPalomitas, float precioPalomitas){
	float precioFinal;
	float pe=(entradas/2)+(entradas%2);
	precioFinal=pe*precioEntradas+(cantPalomitas*precioPalomitas);
	return precioFinal;
}




