/*
 ============================================================================
 Name        : C242-enum.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum giorni {lun, mar, mer, gio, ven, sab, dom};

enum comandi {start, stop, errore = 99, debug};

int main(void) {

	enum giorni wd;

	wd = lun;
	printf("giorno: %d\n", wd);
	wd = mar;
	printf("giorno: %d\n", wd);
	wd = dom;
	printf("giorno: %d\n", wd);

	if (wd == ven) {
		printf("è ven\n", wd);
	}

	enum comandi act;
	act = start;
	printf("cmd: %d\n", act);
	act = errore;
	printf("cmd: %d\n", act);
	act = debug;
	printf("cmd: %d\n", act);

	return EXIT_SUCCESS;
}
