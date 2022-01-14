/*
 ============================================================================
 Name        : C234-ricorsione.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int f(int n);
void fi(int n);

int main(void) {
    //caso base
	f(0);
	//chiamata generica
	f(5);
	//chiamata iterativa
	fi(5);

	return EXIT_SUCCESS;
}

int f(int n) {
	printf("%d ", n);
	if (n == 0) {
		printf("\n\n");
		return 0;
	} else {
		return f(n-1);
	}
}

void fi (int n){
	for (int i = 5; i >= 0; i--){
		printf("%d ", i);
	}
}
