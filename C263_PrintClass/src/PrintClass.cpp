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
	
	cout << "\ndifferenza: a-b ";
	Vector dd = a - b;
	dd.show();

	cout << "\nvettore girato: -b ";
	Vector inv = -b;
	inv.show();

	cout << "\nprod scalare: 2*a ";
	Vector p1 = a*2;
	//a.operator*(2)
	p1.show();

	cout << "\nprod scalare: b*2 ";
	Vector p2 = 2*b;
	p2.show();

	Vector v1 = Vector(12, 23);
	cout << v1;

	Vector v2 = Vector(34, 45);
	cout << "v2: " << v2  << "!\n";


	return 0;
}
