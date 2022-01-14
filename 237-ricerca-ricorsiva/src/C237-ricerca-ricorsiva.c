/*
 ============================================================================
 Name        : C237-ricerca-ricorsiva.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cerca(int *dati, int inf, int sup);

int main(void) {

	int dati[100];
	for (int i = 0; i < 100; i++) dati[i] = 0;

	srand(time(NULL));
	int pos = rand()%100;
	dati[pos] = 1;
	printf("pos nascosta: %d\n", pos);

	cerca(dati, 0, 100);

	return EXIT_SUCCESS;
}

int cerca(int *dati, int inf, int sup){
	int i = (inf + sup)/2;
	if (sup-inf == 1) {
		if (dati[inf] == 1) {
			printf("TROVATO: %d", inf);
		}
		return 0;
	} else {
	  cerca(dati, inf, i);
	  cerca(dati, i, sup);
	}
	return 0;
}

