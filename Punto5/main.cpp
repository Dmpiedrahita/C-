#include <iostream>
#include "Point.h"
using namespace std;

int main() {
	Point p(5,6);
	cout<<p.getMagnitude()<<endl;
	cout<<p.getArgument()<<endl;
	p.print();
	return 0;
}
