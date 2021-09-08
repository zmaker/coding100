#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int segreto = rand();
	printf("n: %d\n", segreto);

	printf("maxval casuale: %d\n", RAND_MAX);
	
	int r1 = rand() % 100;
	printf("n casuale (0-99): %d\n", r1);

	int r2 = (rand() % 100) + 1;
	printf("n casuale (1-100): %d\n", r2);



	return 0;
}