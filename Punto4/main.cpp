#include <iostream>
#include "Time.h"
using namespace std;

int main() {
	Time t(2,50,40);
	t.print();
	t.setTime(1,15,35);
	t.nextSecond();
	t.print();
	return 0;
}
