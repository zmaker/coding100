/*
 ============================================================================
 Name        : C228-AritPuntatori.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1 = 1234;
	int *p1, *p2;
	p1 = &n1;
	p2 = p1;
	printf("valore puntato da: p1=%d p2=%d\n", *p1, *p2);
	printf("indirizzo di: p1=%p p2=%p\n", p1, p2);


	int lista[4] = {12, 23, 34, 45};
	int *pl;

	pl = lista;

	printf("v1: %d \n", *pl);
	pl++;
	printf("v2: %d \n", *pl);
	pl++;
	printf("v3: %d \n", *pl);
	pl--;
	printf("v2: %d \n", *pl);

	pl = lista;
	pl += 2; //pl = pl + 2
	printf("pl + 2: %d \n", *pl);

	pl = lista;
	int *p3 = pl + 3;
	int el = p3 - pl;
	printf("el: %d \n", el);

	return 0;
}
