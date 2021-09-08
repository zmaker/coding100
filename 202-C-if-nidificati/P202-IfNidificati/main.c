#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int temp, hum;

	printf("temp? (0-100): ");
	scanf("%d", &temp);

	printf("hum? (0-100): ");
	scanf("%d", &hum);

	printf("P: %d\tH: %d\n", temp, hum);

	if (temp > 30) {
		//caldo
		if (hum < 50) {
			printf("bagna!!");
		} else if (hum == 50) {
			printf("ok");
		} else {
			printf("non bagnare!!");
		}
	} else {
		//freddo
		printf("troppo freddo per innaffiare");
	}

	return 0;
}