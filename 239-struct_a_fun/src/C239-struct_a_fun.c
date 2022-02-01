/*
 ============================================================================
 Name        : C239-struct_a_fun.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct addr {
  int id;
  char nome[20];
  int cap;
};

void printAddr(struct addr i);

int main(void) {
	struct addr indir_casa;

	indir_casa.id = 1;
	indir_casa.cap = 12345;
	strncpy(indir_casa.nome, "mario", 5);
	indir_casa.nome[5] = 0;

	printAddr(indir_casa);

	return EXIT_SUCCESS;
}

void printAddr(struct addr i){
	printf("nome: %s, id: %d, cap: %d\n", i.nome, i.id, i.cap);
}
