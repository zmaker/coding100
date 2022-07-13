#include <iostream>
using namespace std;

class Rettangolo{
	private:
		int altezza;
		int larghezza;
		
	public:
		Rettangolo(){
			cout << "creo un rettangolo\n";
			larghezza = 1;
			altezza = 1;
		}
		
		void setLarghezza(int l){
			larghezza = l;
		}
		int getLarghezza(){
			return larghezza;
		}
		void setAltezza(int a){
			altezza = a;
		}
		int getAltezza(){
			return altezza;
		}
		
		int area() {
			return altezza * larghezza;
		}
		
		int perimetro(){
			return 2 * (altezza + larghezza);
		}
	
};

class Cerchio {
	private:
		float raggio;
	public:
		Cerchio(float r){
			raggio = r;
		}
		float cfz() {
			return 2.0 * 3.14 * raggio;
		}
};

int main(int argc, char** argv) {
	Rettangolo r1;
	r1.setAltezza(10);
	r1.setLarghezza(5);
	int p = r1.perimetro();
	int a = r1.area();
	cout << "Area: " << a << " Per:" << p << "\n";
	
	Cerchio c1(5.0);
	float c = c1.cfz();
	cout << "Circonf: " << c << " \n";
	
	return 0;
}



