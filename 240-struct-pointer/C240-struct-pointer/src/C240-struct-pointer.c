/*
 ============================================================================
 Name        : C240-struct-pointer.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct mail {
  int id;
  char addr[20];
  char titolo[20];
  char body[100];
};

int main(void) {

	struct mail saluto;
	saluto.id = 12;

	struct mail *p;

	p = &saluto;

	int n = p->id;
	printf("mail id: %d\n", n);

	return EXIT_SUCCESS;
}
