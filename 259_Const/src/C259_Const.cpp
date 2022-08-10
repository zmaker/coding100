//============================================================================
// Name        : C259_Const.cpp
// Author      : Paolo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

class Item {

private:
	int num;
	char nome[20];
public:
	Item(char n[], int q);
	void show() const;
	void setQty(int n);

};

int main() {
	
	const Item a("bullone", 10);
	a.show();
	
	Item b("dadi", 123);
	b.show();
	b.setQty(20);
	b.show();
	
	return 0;
}

Item::Item(char n[], int q){
	strcpy(this->nome, n);
	this->num = q;
}

void Item::show() const {
	cout << "[" << nome << "] n: " << num << "\n";
}

void Item::setQty(int n){
	this->num = n;
}

