/*
 ============================================================================
 Name        : C245-preprocessore.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define VERO 1
#define FALSO 0

#define UNO 1
#define DUE 2
#define TRE UNO+DUE

#define ERROR_MSG "Errore Irreversibile!\n"
#define LONG_MSG "Errore irreversibile! \
molto lungo con descrizione\n"

#define BUFSIZE 10

#define MSG questo non va

int main(void) {

	if (VERO) {
		printf("vero!\n");
	}

	printf("%d\n", UNO);
	printf("%d\n", DUE);
	printf("%d\n", TRE);

	printf(ERROR_MSG);
	printf(LONG_MSG);

	int buff[BUFSIZE];
	for (int i = 0; i < BUFSIZE; i++){
		buff[i] = i*2;
		printf("%d ", buff[i]);
	}
	printf("\n");

	printf("MSG");

	return EXIT_SUCCESS;
}
