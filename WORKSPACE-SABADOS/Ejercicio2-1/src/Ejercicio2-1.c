/*
 ============================================================================
 Name        : Ejercicio2-1.c
 Author      : Aquije Matta Braian (1E)
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Validar(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int ingreseEntero;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &ingreseEntero);

	resultado = Validar(ingreseEntero);

	if (ingreseEntero == 0) {
		printf("El numero ingresado fue: %d\n", resultado);
	} else {
		if (ingreseEntero > 0) {
			printf("El resultado es positivo, por ende: %d\n", resultado);
			printf("RESULTADO: %d\n", ingreseEntero);
		} else {
			printf("El resultado es negativo por ende: %d\n", resultado);
		}
	}

	return EXIT_SUCCESS;
}

int Validar(int numero) {
	int numeroIngresado;

	if (numero == 0) {
		numeroIngresado = 0;
	} else {
		if (numero > 0) {
			numeroIngresado = 1;
		} else {
			numeroIngresado = -1;
		}
	}

	return numeroIngresado;
}
