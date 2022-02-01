/*
 ============================================================================
 Name        : C238-strutture.c
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
 char nome[20];
 char citta[20];
 int cap;

};

struct addr_esteso {
 char nome[20];
 char cognome[20];
 char citta[20];
 int cap;
} casa, lavoro;

struct {
	char nome[20];
	int id;
} addr_breve;

//array di struture
struct cella {
	int id;
	int stato;
	int crc;
};
struct cella buff[10];


int main(void) {
	struct addr ind1;

	ind1.cap = 123;

	char str[] = "mario rossi";
	strncpy(ind1.nome, str, sizeof(str));
	ind1.nome[sizeof(str)] = 0;

	strncpy(ind1.citta, "roma", 20);
	ind1.citta[19] = 0;


	return EXIT_SUCCESS;
}
