#include <iostream>
#include "Ball.h"

using namespace std;

int main() {
	Ball b(0,0,1,2);
	b.print();
	b.move();
	b.print();	
	return 0;
}
