#include <iostream>
#include "Author.h"


using namespace std;

Author::Author(string name,string email,char gender){
	this->name=name;
	this->email=email;
	if (gender=='m' ||gender=='f'){
		this->gender=gender;
	}else{
	
		cout<<"Genero no valido"<<endl;
		this->gender='d';
		}
	
}

string Author::getName() const{
	return this->name;
}

string Author::getEmail() const{
	return this->email;
}

char Author::getGender() const{
	return this->gender;
}

void Author::setEmail(string email){
	size_t atIndex=email.find("@");
	if (atIndex != string::npos && atIndex !=0 && atIndex!=email.length()-1){
		this->email=email;
	}else{
		cout<<"Correo invalido"<<endl;
		this->email="";
	}
}

void Author::print() const{
	cout<<this->name<<" ("<<this->gender<<") en"<<this->email<<endl;
}
