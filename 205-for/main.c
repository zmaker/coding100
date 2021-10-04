#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {

	for (int i = 0; i < 10; i = i + 1) printf("i: %d\n", i);

	int j = 0;
	for (j = 0; j < 10; j++) {
		int q = j * j;
		printf("n: %d n2:%d\n", j, q);
	}
	j = 100;
	for (; j < 10; j++) {
		int c = j * j * j;
		printf("n: %d n3:%d\n", j, c);
	}

	for (int i = 9; i >= 0; i--) {
		printf("%d\n", i);
	}

	for (int x = 0, y = 0; x+y < 20; x++, y+=2 ) {
		printf("x=%d\ty=%d\n", x, y);
	}

	for (int i = 0; i < 20; i += 2) {
		printf("%d \n", i);
	}

	printf("Prima");
	for (;;);
	printf("Dopo");


	return 0;
}