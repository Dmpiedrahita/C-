#include <iostream>
#include "Rectangulo.h"


using namespace std;

int main() {	
	Rectangulo r(5,6);	
	cout<<"El rectangulo tiene un area de: "<<r.getArea();
	r.display();
	return 0;
}
