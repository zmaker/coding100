/*
 ============================================================================
 Name        : C241-bitfield.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct registro {
  unsigned filtro5hz: 1;
  unsigned filtro50hz: 1;
  unsigned stato: 1;
  unsigned payload: 3;
  unsigned : 2;
};

int main(void) {

	struct registro rcpu;

	rcpu.filtro50hz = 1;
	rcpu.filtro5hz = 0;

	if (rcpu.filtro50hz) {
		printf("50Hz on\n");

	} else {
		printf("50Hz off\n");
	}

	rcpu.payload = 7;
	printf("payload: %d\n", rcpu.payload);

	return EXIT_SUCCESS;
}
