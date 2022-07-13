#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	printf("ciao old style\n");
	
	std::cout << "hello world cpp\n";
	cout << "hello" << " snello!\n";
	
	int n = 0;
	cout << "Dammi un numero: ";
	cin >> n;
	cout << "\nIl numero e': " << n << "\n";
	
	return 0;
}
