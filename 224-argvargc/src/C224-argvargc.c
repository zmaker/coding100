/*
 ============================================================================
 Name        : C224-argvargc.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	printf("Num par: %d\n", argc);
	printf("nome comando: %s\n\n", argv[0]);

	if (argc == 2) {
		printf("Ciao, %s\n\n", argv[1]);
	} else {
		printf("Il comando %s richiede almeno 1 parametro\n\n", argv[0]);

	}

	return EXIT_SUCCESS;
}
