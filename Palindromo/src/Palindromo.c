/*
 ============================================================================
 Name        : Palindromo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 50
int main(void) {
	char cadena[MAX*2];

	puts("Cadena palindromo");
	fflush(stdout);
	fflush(stdin);
	gets(cadena);

	if(esPalindromo(cadena)){
		puts("La cadena es palindromo");
	}else
		puts("La cadena no es palindromo");
}
