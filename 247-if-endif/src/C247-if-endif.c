/*
 ============================================================================
 Name        : C247-if-endif.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEVEL 2

#define ENG 0
#define ITA 1
#define SPA 2
#define LANG SPA

#define VER 1
#define INTEL 10
#define MOTOROLA 20

#define ARCH INTEL

int main(void) {

#if LEVEL == 1
	printf("Livello 1\n");
#elif LEVEL > 1
	printf("Livello elevato!\n");
#else
	printf("Livello 0\n");
#endif

#if LANG == ENG
	printf("Hello!\n");
#elif LANG == ITA
	printf("Ciao!\n");
#elif LANG == SPA
	printf("Ola!\n");
#else
	printf("???\n");
#endif

#if ARCH == INTEL
	#if VER > 1
	int freq = 1000;
	#else
	int freq = 500;
	#endif
#endif
	printf("freq: %d\n", freq);

	return EXIT_SUCCESS;
}
