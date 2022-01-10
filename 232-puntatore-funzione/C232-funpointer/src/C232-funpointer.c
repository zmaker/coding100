/*
 ============================================================================
 Name        : C232-funpointer.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int somma (int a, int b);
int prod (int c, int d);

int main(void) {

	int (*p)(int a, int b);
	int n,m;

	int cmd;
	do {
		printf("\nn?");
		scanf("%d", &n);
		printf("m?");
		scanf("%d", &m);

		printf("\nsomma o molt (1/2)?");
		scanf("%d", &cmd);
		if (cmd == 1) {
			p = somma;
		} else {
			p = prod;
		}

		int res = (*p)(n, m);
		printf("\nres=%d\n", res);

		printf("\nAncora (1=si/0=no)?");
		scanf("%d", &cmd);
		getchar();

	} while (cmd != 0);


	return EXIT_SUCCESS;
}

int somma (int a, int b){
	return a + b;
}
int prod (int c, int d) {
	return c * d;
}
