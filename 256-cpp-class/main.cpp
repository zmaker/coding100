#include <iostream>

using namespace std;

class Rettangolo{
	public:
		Rettangolo(){
			cout << "creo un rettangolo\n";
			larghezza = 1;
			altezza = 1;
		}
		
		int altezza;
		int larghezza;
		
		int area() {
			return altezza * larghezza;
		}
		
		int perimetro(){
			return 2 * (altezza + larghezza);
		}
	
};

int main(int argc, char** argv) {
	Rettangolo r1;
	r1.altezza = 10;
	r1.larghezza = 5;
	int p = r1.perimetro();
	int a = r1.area();
	cout << "Area: " << a << " Per:" << p << "\n";
	
	Rettangolo r2;
	
	return 0;
}
