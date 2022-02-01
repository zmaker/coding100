/*
 ============================================================================
 Name        : C243-union.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union mixed {
	int i;
	long n;
};

int main(void) {

	union mixed var;

	var.i = 123;
	printf("Union i: %d\n", var.i);
	printf("Union n: %d\n", var.n);

	var.n = 345;
	printf("Union i: %d\n", var.i);
	printf("Union n: %d\n", var.n);

	return EXIT_SUCCESS;
}
