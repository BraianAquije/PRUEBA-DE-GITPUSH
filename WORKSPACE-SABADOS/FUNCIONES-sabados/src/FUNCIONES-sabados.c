/*
 ============================================================================
 Name        : FUNCIONES-sabados.c
 Author      : Aquije Matta Braian (1E)
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"


int main(void) {
	setbuf(stdout,NULL);
	int legajo;
	int edad;

	legajo = IngresarEntero("Ingrese legajo: ");
	edad = IngresarEntero("Ingrese edad:" );

	printf("El legajo ingresado es: %d\n", legajo);
	printf("La edad ingresada es: %d", edad);

	return EXIT_SUCCESS;
}
