/*
 ============================================================================
 Name        : C248-ifdef-ifndef.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define DEBUG

#define ARCH_64

int main(void) {

	int n = 123;

#ifdef DEBUG
	printf("La variabile n vale: %d\n", n);
#else
	printf("n: %d\n", n);
#endif
	n++;
	printf("n: %d\n", n);

#ifndef ARCH_64
	printf("WARNing: Non è a 64 bit!\n", n);
	#error Non è a 64 bit!
#endif

#if defined ARCH_64
	printf("64 bit: ok\n", n);
#endif

	return EXIT_SUCCESS;
}
