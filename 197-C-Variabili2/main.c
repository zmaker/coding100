/*
  File di esempio sulle variabili

*/

#include <stdio.h>

int stato = 0;

int main() {
    // variabili locali
	int i = 0;
	int j = 23;

	printf("i = %d \n", i);
	printf("st = %d \n", stato);

	j = j + 1;
	{
		int j, i;
		i = 12;
		printf("i interno al blocco = %d \n", i);
	}
	
	return 0;
}

void f() {
	int i = 2;
	printf("st da f = %d", stato);
}

void f2(int x, int y) {
	int z = x + y;
}
