/*
 ============================================================================
 Name        : C221-fun-call.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int inc(int n){
	n++;
	printf("i interno: %d\n", n);
	return n;
}

void inc2(int *n){
	*n = *n + 1;
}

int main(void) {

	int i = 0;
	printf("i: %d\n", i);
	inc(i);
	printf("i: %d\n\n", i);

	printf("i: %d\n", i);
	inc2(&i);
	printf("i: %d\n\n", i);


	return EXIT_SUCCESS;
}
