/*
 ============================================================================
 Name        : C252-readfile2.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *f;
	f = fopen("./testo.txt", "r");
	if (f == NULL) {
		printf("file non trovato!\n");
		exit(1);
	}
	char ch;
	while ( (ch = fgetc(f)) != EOF ) {
	  putchar(ch);
	}

	fclose(f);
	return 0;
}
