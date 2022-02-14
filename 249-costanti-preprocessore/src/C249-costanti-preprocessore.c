/*
 ============================================================================
 Name        : C249-costanti-preprocessore.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

int main(void) {

	printf("linea src: %d\n", __LINE__);
	printf("Nome file sorgente: %s\n", __FILE__);

	printf("data: %s\n", __DATE__);
	printf("ora: %s\n", __TIME__);

	return EXIT_SUCCESS;
}
