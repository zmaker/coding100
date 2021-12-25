/*
 ============================================================================
 Name        : C227-Puntatori.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 123;

	printf("valore di n: %d indirizzo di n: %p\n", n, &n);

	int *p1;
	p1 = &n;

    printf("valore di p1: %p valore puntato da p1: %d\n", p1, *p1);

	return 0;
}
