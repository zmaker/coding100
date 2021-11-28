/*
 ============================================================================
 Name        : C222-fswap.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *v1, int *v2) {
	int t = *v1;
	*v1 = *v2;
	*v2 = t;
}

int incx() {
	static int i = 0;
	i++;
	printf("i: %d\n", i);
	return i;
}

int main(void) {

	int a = 10;
	int b = 20;

	printf("a= %d\n", a);
	printf("b= %d\n\n", b);

	swap(&a, &b);

	printf("a= %d\n", a);
	printf("b= %d\n", b);

	incx();
	incx();
	int x = incx();
	printf("x: %d ", x);

	return EXIT_SUCCESS;
}
