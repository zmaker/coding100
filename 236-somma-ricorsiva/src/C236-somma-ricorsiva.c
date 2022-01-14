/*
 ============================================================================
 Name        : C236-somma-ricorsiva.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sr(int n);

int main(void) {

	//sr(1) = 1 -> 1
	//sr(2) = 1 + 2
	//sr(5) = 1 + 2+ 3+ 4+ 5

	for (int i = 0; i < 10; i++){
		int ans = sr(i);
		printf("ans= %d\n", ans);
	}


	return EXIT_SUCCESS;
}

int sr(int n){
	if (n <= 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return (n + sr(n-1));
	}
}


