/*
 ============================================================================
 Name        : C251-readfile1.c
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

	f = fopen("./dati.txt", "r");
	if (f == NULL) {
		printf("file non trovato!\n");
		exit(1);
	}
	int n;
	fscanf(f, "%d", &n);
	printf("n: %d\n", n);

	char str[20];
	fscanf(f, "%s", str);
	printf("str: %s\n", str);

	fclose(f);

	return 0;
}
