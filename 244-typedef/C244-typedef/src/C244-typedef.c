/*
 ============================================================================
 Name        : C244-typedef.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef int numero;

typedef struct _msg {
	int id;
	int crc;
	char msg[20];
} msg;

int main(void) {

	numero n;
	n = 0;
	printf("n: %d\n", n);

	msg email;

	email.id = 1;
	printf("id: %d\n", email.id);

	return EXIT_SUCCESS;
}
