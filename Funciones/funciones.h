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
 * funcion que muestra los elementos menores a un numero dado
 */
void mostrarMenoresQue(int vector[],int tam, int n);
/**
 * funcion que muestra los valores dentro de un rango
 */
void valoresRango(int vector[],int tam, int inicio, int fin);
/**
 * funcion que rota una posicion a la izquierda el array
 */
void rotarIzquierda(int vector[],int tam);
/**
 * funcion que rota una posicion a la derecha el array
 */
void rotarDerecha(int vector[],int tam);
/**
 * funcion que busca un numero y muestra los numeros mayores a partir de ahi
 */
void mostrarMayores(int vector[], int tam, int buscar);
/**
 * funcion que dice si dos arrays son paralelos
 */
int sonPararlelos(int v1[], int v2[], int tam);
/**
 * funcion que indica si un número es capicua
 */
int capicua(int vector[], int tam);
/**
 * funcion que le da la vuelta al array
 */
void copiarReves(int vector[], int tam);
/**
 * funcion que suma dos vectores
 */
void sumarVector(int v1[], int v2[], int v3[], int tam);
/**
 * funcion que calcula el precio de gasolina
 */
float getPrecio(int tipo);
float calculaImporte(int tipo, float litros);



#endif /* FUNCIONES_H_ */
