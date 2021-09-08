/* per usare scanf è necessario disabilitare i warning del compilatore */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*
	00 - Hello World
	*/
	printf("Hello World\n");

	/*
	01 - legge un intero da console
	https://www.educative.io/edpresso/how-to-read-data-using-scanf-in-c
	*/	 
	/*
	int a;
	int x = scanf("%d", &a);
	printf("Decimal Number is : %d\n", a);
	printf("Return Value: %d \n", x);
	
	//legge una stringa da console
	char str[20];
	x = scanf("%s", &str);
	printf("Hello, %s \n", str);
	printf("Return Value: %d \n", x);

	//con scanf_s - più sicuro previene buffer overflow
	char name[64];
	x = scanf_s("%s", name, sizeof(name);
	printf("Ciao, %s\n", name);
	*/

	/*
	03 - Genero un numero a caso
	*/
	int segreto = rand(); //genera un numero a caso - importa stdlib!!!!
	printf("segreto: %d\n", segreto);

	//il max val di rand()
	printf("segreto: %d maxval: %d\n", segreto, RAND_MAX); //vale 32000... come ridurlo?
	int r1 = rand() % 100;  //da 0 a 99
	printf("segreto (0/99): %d\n", r1);

	//così uscirà sempre uguale!!!
	//lo inizializzo con srand
	srand(time(NULL)); //import time.h
	int r2 = rand() % 100;  //da 0 a 99
	printf("segreto (0/99): %d\n", r2);

	//numero da 1 a 10 
	int r3 = rand() % 10 + 1;
	printf("segreto (1/10): %d\n", r3);


	/*
	04 - if - then - else
	falso è zero
	*/
	const int FALSO = 0;
	const int VERO = 1;

	srand(time(NULL)); //import time.h
	int s = rand() % 10 + 1;  //da 1 a 10
	printf("segreto (1/10): %d\n", s);
	int num = 0;
	scanf("%d", &num);
	if (s == num) {
		printf("sono uguali\n");
	}
	else {
		printf("non sono uguali\n");
	}

	if (s > num) {
		printf("s > n\n");
	}
	else if (s < num ){
		printf("s < n\n");
	}
	else {
		printf("s == n\n");
	}

	/*
	05 - if nidificati
	*/
	int temp, press;
	//chiede temp e pressione

	/*
	06 - if breve (?:)
	*/
	
	/*
	07 - switch
	*/

	/*
	08 - iterazioni - for
	*/

	/*
	09 - iterazioni - while
	*/

	/*
	10 - iterazioni - do-while
	*/

	/*
	11 - funzioni 
	*/

	return 0;
}