/*
 ============================================================================
 Name        : C250-creare_file.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 https://www.programiz.com/c-programming/c-file-input-output

 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *f;

	f = fopen("./dati.txt", "w");
	if (f == NULL) {
		printf("file non trovato!\n");
		exit(1);
	}

	int num = 123;
	fprintf(f, "%d", num);
	fprintf(f, "%s", "helloworld!");

	fclose(f);

	return 0;
}
