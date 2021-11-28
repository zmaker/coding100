/*
 ============================================================================
 Name        : C223-arrayfun.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void elab1(char str[6]) {
	for (int i = 0; i < 5; i++){
		printf("%d:%c\n", i, str[i]);
	}
}

void elab2(char str[]) {
	for (int i = 0; i < 5; i++){
		printf("%d:%c\n", i, str[i]+1);
	}
}

void elab3(char *str) {
	for (int i = 0; i < 5; i++){
		printf("%d:%c\n", i, str[i]+2);
	}
}

int somma(int a, int b){
	return a + b;
}

int main(void) {

	char str[6] = "hello";
	elab1(str);
	elab2(str);
	elab3(str);

	int num[3] = {10, 23, 34};
	int n = somma(num[0], num[2]);
	printf("somma: %d", n);

	return EXIT_SUCCESS;
}
