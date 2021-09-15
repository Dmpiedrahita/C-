#include <iostream>
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main() {	
	Rectangulo r(5,6);
	Triangulo t(5,6);
	cout<<"El rectangulo tiene un area de: "<<r.getArea();
	cout<<"\nEl triangulo tiene un area de: "<<t.getArea();
	return 0;
}
