/*
 ============================================================================
 Name        : C225-fun-float.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int somma(int a, int b);
float divx(int a, int b);

int main(void) {
	somma(1, 2);
	divx(10, 3);
	return EXIT_SUCCESS;
}

int somma(int a, int b){
	return a+b;
}

float divx(int a, int b){
	float x = 0.0;
	return x;
}
