#include <iostream>
#include "Book.h"


using namespace std;


int main() {
	Author a("Jose","jose@jose",'m');
	a.print();
	Book b("Libro",a,100,5);
	b.print();
	
	return 0;
}
