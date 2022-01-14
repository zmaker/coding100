/*
 ============================================================================
 Name        : C235-fattoriale.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fat(int n);

int main(void) {
	//fattoriale
	//3! = 1 * 2 * 3 = 6
	//5! = 1 * 2 * 3 * 4 * 5;
	//1! = 1

	int ans = fat(5);
	printf("ans: %d\n", ans);

	ans = fat(3);
	printf("ans: %d\n", ans);

	ans = fat(1);
	printf("ans: %d\n", ans);

	ans = fat(10);
	printf("ans: %d\n", ans);

	return EXIT_SUCCESS;
}

int fat(int n){
	if (n == 1) {
		return 1;
	} else {
		return (n * fat(n-1));
	}
}
