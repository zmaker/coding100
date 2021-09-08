#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero = 0;
	int ret = scanf("%d", &numero);
	printf("n: %d", numero);

	char str[20];
	ret = scanf("%s", &str);
	printf("msg: %s (%d)", str, ret);

	char msg[50];
	ret = scanf_s("%s", &msg, sizeof(msg));
	printf("msg2: %s (%d)", msg, ret);

	return 0;
}