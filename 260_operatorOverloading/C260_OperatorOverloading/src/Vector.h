/*
 * Vector.h
 *
 *  Created on: Aug 9, 2022
 *      Author: paoloaliverti
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
using namespace std;

class Vector {

private:
	float x;
	float y;
	float r;
	float alpha;
public:
	Vector();
	Vector(float xp, float yp);
	
	void show();
	
	Vector operator+(const Vector & v) const;
};


#endif /* VECTOR_H_ */
