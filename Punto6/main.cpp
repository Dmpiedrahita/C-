#include <iostream>
#include "Account.h"
using namespace std;

int main() {
	Account cuenta(12345,100000);
	cuenta.credit(1000000);
	cuenta.print();
	cuenta.debit(500000);
	cuenta.print();
	cuenta.debit(2000000);
	return 0;
}
