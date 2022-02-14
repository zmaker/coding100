/*
 ============================================================================
 Name        : C246-macro.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ABS(a) (a)<0 ? -(a) : (a)
#define PRT(s) printf("%s\n", (s))
#define AREA(a, b) (a)*(b)
#define AREATRI(a, b) ((a)*(b))/2
#define PI 3.14
#define CFZ(r) 2.0*PI*(double)(r)

int main(void) {

	int n = 12;
	printf("%d, abs=%d\n", n, ABS(n));
	n = -2;
	printf("%d, abs=%d\n", n, ABS(n));

	PRT("Hello!");

	int l = 10;
	int h = 5;
	printf("area = %d\n", AREA(h, l));
	printf("area tri = %d\n", AREATRI(h, l));
	printf("circonferenza = %f\n", CFZ(10.0));

	return EXIT_SUCCESS;
}
