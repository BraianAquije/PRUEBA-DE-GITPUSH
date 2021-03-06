/*
 ============================================================================
 Name        : Ejercicio2-2.c
 Author      : Aquije Matta Braian (1E)
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Ejercicio 2-2:
Realizar un programa que permita el ingreso de 10 n?meros enteros:
- Determinar el promedio de los positivos
- La cantidad de ceros
- Del menor de los negativos la suma de los antecesores.

Nota:
Utilizar la funci?n del punto anterior y desarrollar funciones para resolver los procesos
que est?n resaltados.*/
#include <stdio.h>
#include <stdlib.h>

int VerificarSigno(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;
	int i = 0;
	int contadorPositivos=0;
	int acumularPositivos=0;

	for (i = 0; i < 10; i++) {
		printf("Ingresar numero: ");
		scanf("%d", &numeroIngresado);

		numeroIngresado = VerificarSigno(numeroIngresado);

		if(numeroIngresado==1){
			contadorPositivos++;
			acumularPositivos = acumularPositivos+ numeroIngresado;
		}

	}
printf("El resultado final es: %d",acumularPositivos);

	return EXIT_SUCCESS;
}


int VerificarSigno(int numero) {
	int signo;

	if (numero == 0) {
		signo = 0;
		} else {
			if (numero > 0) {
				signo = 1;
			} else {
				signo = -1;
			}
		}

	return signo;
}
