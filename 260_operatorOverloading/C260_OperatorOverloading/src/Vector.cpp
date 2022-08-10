/*
 * Vector.cpp
 *
 *  Created on: Aug 9, 2022
 *      Author: paoloaliverti
 */

#include "Vector.h"
#include <math.h>
#include <iostream>
using namespace std;

Vector::Vector(){
	x = 0;
	y = 0;
	r = 0;
	alpha = 0;
}

Vector::Vector(float xp, float yp){
	x = xp;
	y = yp;
	r = sqrt(x*x + y*y);
	alpha = atan(y/x);
}
	
void Vector::show(){
  	cout << "(" << x << "," << y << ")\n";
}

Vector Vector::operator+(const Vector & v) const {
	float sx, sy;
	sx = x + v.x;
	sy = y + v.y;
	Vector sum = Vector(sx, sy);
	return sum;
}
