#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("menu - scegli l'ozione:\n(1) - formatta\n(2) - nuovo\n");
	int ans = 0;
	scanf("%d", &ans);

	switch (ans) {
	case 0:
		printf("scelto 0");
		break;
	case 1:
	case 2:
		printf("scelto 1 o 2");
		break;
	case 3:
		{
		int x = 123;
		printf("x=%d", x);
		}
		break;
	//default:
	//	printf("nessuna scelta valida");		
	}
}