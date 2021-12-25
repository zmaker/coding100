/*
 ============================================================================
 Name        : C229-stack.c
 Author      : Paolo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

void push(int n);
int pop();

int stack[10];
int *top;
int *p1;

int main(void) {
	int v = 0;

	p1 = stack;
	top = stack;

	do {
		printf("val: ");
		scanf("%d", &v);
		printf("\nricevuto: %d\n", v);

		if (v > 0) {
			//aggiungo v (push)
			printf("aggiungo allo stack\n");
			push(v);

		} else {
			//estraggo ultimo valore (pop)
			int ext = pop();
			printf("estratto: %d\n", ext);
		}

	} while (v >= 0);
	printf("END\n");
	return 0;
}

void push(int n){
	if (p1 == top+10) {
		printf("superata la capienza\n");
		exit(-1);

	} else {
		*p1 = n;
		p1++;
	}
}

int pop(){
	int n = 0;
	if (p1 == top) {
		printf("stack vuoto\n");
		n = -1;
	} else {
		p1--;
		n = *p1;
	}
	return n;
}




