/*
 ============================================================================
 Name        : 231-scanf.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char cmd;
	int LOOP = 1;

	while (LOOP) {
		int n;
		scanf("%d", &n);
		printf("\nn= %d", n);
		//ELAB
		printf("\nancora (s/n)?: ");
		scanf(" %c", &cmd);
		getchar();

		if (cmd != 's') LOOP = 0;
	}
	printf("END");
	return EXIT_SUCCESS;
}
