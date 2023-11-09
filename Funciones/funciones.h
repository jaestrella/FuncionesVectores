/*
 * funciones.h
 *
 *  Created on: 2 nov 2023
 *      Author: usuario
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/**
 * procedimiento que pide un vestor por teclado
 * pide tantos elementos como indique el parametro tam
 */
void pedirVector(int vector[], int tam);
/**
 * procedimiento que muestra un vector por pantalla
 * hay que pasarle el argumento tam para indicar cuantos elementos del vector
 * deben mostrarse
 */
void mostrarVector(int vector[], int tam);
/**
 * funcion que devuelve la casilla de la primera ocurrencia
 * en el vector del numero indicado por buscar. Devuelve -1 si el elemento no ha sido encontrado
 */
int posicionPrimerElemento(int vector[], int tam, int buscar);

/**
 * funcion que calcula el precio de gasolina
 */
float getPrecio(int tipo);
float calculaImporte(int tipo, float litros);
/**
 * funciones de cine
 */
float descuento2x1(int entradas, float precioEntradas, int cantPalomitas, float precioPalomitas);
float palomitasDescuento(int entradas, int cantPalomitas,float precioEntradas,float precioPalomitas);
float diaEspectador(int entradasAdulto,int entradasChild, float precioEntradas, int cantPalomitas, float precioPalomitas);
float facturaCine(int adultos, int child, int cantPalomitas);


#endif /* FUNCIONES_H_ */
