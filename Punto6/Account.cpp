#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;

Account::Account(int accountNumber, double balance){
	this->accountNumber=accountNumber;
	this->balance=balance;
}

int Account::getAccountNumber() const{
	return this->accountNumber;
}

double Account::getBalance() const{
	this->balance;
}

void Account::setBalance(double balance){
	this->balance=balance;
}

void Account::credit(double amount){
	this->balance+=amount;
}

void Account::debit(double amount){
	if (amount<=balance){
		this->balance-=amount;
	}else
		cout<<"La cantidad excede el saldo actual!!!";	
}

void Account::print() {
	cout<<"A/C no: "<<fixed<<setprecision(2)<<this->accountNumber<<" Balance: $"<<this->balance<<endl;
}
