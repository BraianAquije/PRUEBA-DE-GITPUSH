/*
 * Input.c
 *
 *  Created on: 4 sep. 2021
 *      Author: Facu
 */

#include "Input.h"
int IngresarEntero(char mensaje[])
{
	int numeroIngresado;
	printf("%s",mensaje);
	scanf("%d", &numeroIngresado);

	return numeroIngresado;
}
