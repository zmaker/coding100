#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int q = (n > 0) ? n * n : -(n * n);
	printf("n2: %d", q);

	return 0;
}