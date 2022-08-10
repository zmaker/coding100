//============================================================================
// Name        : C260_OperatorOverloading.cpp
// Author      : Paolo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Vector.h"

int main() {
	Vector a = Vector(10, 5);
	Vector b = Vector(5, 8);
	a.show();
	b.show();
	
	Vector sum = a + b; //a.operator+(b)
	sum.show();
	
	cout << "\n differenza: a-b ";
	Vector dd = a - b;
	dd.show();

	cout << "\n vettore girato: -b ";
	Vector inv = -b;
	inv.show();

	return 0;
}
