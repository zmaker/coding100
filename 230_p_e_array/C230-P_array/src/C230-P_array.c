/*
 ============================================================================
 Name        : C230-P_array.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prt1(char *str);
void prt2(char *s);

int main(void) {

	char str[20] = "hello world";
	char *p1;
	p1 = str;

	printf("1° el: %c\n", str[0]);
	printf("1° el: %c\n", *p1);

	printf("4° el: %c\n", str[3]);
	printf("4° el: %c\n", *(p1 + 3));

	putchar('a');
	prt1("ciao!!\n");
	prt2("ciao con ptr!!\n");

	return 0;
}

void prt1(char *str){
	register int i;
	for (i = 0; str[i]; i++) putchar(str[i]);
}
void prt2(char *s){
 while (*s) putchar(*s++);
}

