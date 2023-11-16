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

void valoresRango(int vector[],int tam, int inicio, int fin){
	int i;
	for(i=0;i<tam;i++){
		if(vector[i]>=inicio && vector[i]<fin){
			printf("%d\t",vector[i]);
		}
	}
}

void rotarIzquierda(int vector[],int tam){
	int primero=vector[0];
	int i;
	for(i=0;i<tam-1;i++){
		vector[i]=vector[i+1];
	}
	vector[tam-1]=primero;
}

void rotarDerecha(int vector[],int tam){
	int ultimo=vector[tam-1];
	int i;
	for(i=tam-1;i>0;i--){
		vector[i]=vector[i-1];
	}
	vector[0]=ultimo;
}

void mostrarMayores(int vector[], int tam, int buscar){
	int i;
	int sinPosicion=0;
	for(i=0;i<tam;i++){
		if(vector[i]==buscar){
			sinPosicion++;
		}
		if(sinPosicion>0){
			printf("%d\t",vector[i]);
		}
	}
}

int sonPararlelos(int v1[], int v2[], int tam){
	int i;
	for(i=1;i<tam;i++){
		if(v1[i-1]*v2[i]==v1[i]*v2[i-1]){
			return 0;
		}
	}return 1;
}

int capicua(int vector[], int tam){
	int i;
	int j=tam-1;
	for(i=0;i<tam;i++){
		if(vector[i]!=vector[j]){
			j--;
			return 1;
		}else{
			return 0;
		}
	}
	return 0;
}

void copiarReves(int vector[], int tam){
	int i=0;
	int j=tam-1;
	while(i<j){
		int aux=vector[i];
		vector[i]=vector[j];
		vector[j]=aux;
		j--;
		i++;
	}
}

void unirVectores(int v1[], int v2[], int tam, int tam2){
	int concatena=tam+tam2;
	int v3[concatena];
	int i;
	int j;
	for(i=0;i<tam;i++){
		v3[i]=v1[i];
		j=i;
	}
	for(i=0;i<tam2;i++){
		j++;
		v3[j]=v2[i];
	}
	for(i=0;i<concatena;i++){
		printf("%d\t",v3[i]);
	}


}

void sumarVector(int v1[], int v2[],int v3[], int tam){
	int i;
	for(i=0;i<tam;i++){
		v3[i]=v1[i]+v2[i];
		printf("%d\t",v3[i]);
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




