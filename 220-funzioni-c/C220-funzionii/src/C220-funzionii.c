/*
 ============================================================================
 Name        : C220-funzionii.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void saluto() {
	printf("ciao!");
}

int somma(int a, int b) {
	int somma = a + b;
	return somma;
}

int main(void) {

	saluto();
	int c = 10;
	int d = 12;
	int r = somma(c, d);
	printf("somma: %d", r);

	return 0;
}
