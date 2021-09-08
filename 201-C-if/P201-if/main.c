#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));
	int s = (rand() % 10) + 1; //num da 1 a 10
	printf("s: %d\n", s);

	int n;
	scanf("%d", &n);

	if (s == n) {
		printf("n uguale a s\n");
	} else {
		printf("n diverso da s: non hai indovinato\n");
	}

	if (s > n) {
		printf("il numero e' più grande");
	} else if (s < n) {
		printf("il numero e' più piccolo");
	} else {
		printf("ok");
	}

	return 0;
}