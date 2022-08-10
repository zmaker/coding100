//============================================================================
// Name        : C258-Constructors.cpp
// Author      : Paolo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Stock.h"

#include <iostream>
using namespace std;

int main() {
	cout << "Test classi" << "\n";
	
	Stock canistracci;
	canistracci.show();
	
	Stock aiazzone("aiazzone", 10, 12.3);
	aiazzone.show();
	
	Stock usrobot = Stock("UsRobotics", 23, 45.7);
	usrobot.show();
	
	return 0;
}
