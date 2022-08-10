/*
 * Stock.h
 *
 *  Created on: Jul 27, 2022
 *      Author: paoloaliverti
 */

#ifndef STOCK_H_
#define STOCK_H_

class Stock {
	
private:
	char nome[20];
	int numero;
	float valore;
	
public:
	Stock();
	Stock(char nome[], int qta, float val);
	~Stock();  // ~ tilde
		
	void show();	
};

#endif /* STOCK_H_ */
