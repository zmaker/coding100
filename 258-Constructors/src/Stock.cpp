/*
 * Stock.cpp
 *
 *  Created on: Jul 27, 2022
 *      Author: paoloaliverti
 */

#include "Stock.h"
#include <iostream> //cout
#include <string.h> //strcpy

using namespace std;

Stock::Stock() {
	valore = 0.0;
	numero = 0;
	strcpy(nome, "_");
}

Stock::Stock(char nome[], int qta, float val){
	strcpy(this->nome, nome);
	this->numero = qta;
	this->valore = val;
}

Stock::~Stock(){
	cout << "Bye " << nome << "\n";
}

void Stock::show(){
	cout << "Stock [" << nome << "] n." << numero << "\n";
}


