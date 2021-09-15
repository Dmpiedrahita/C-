#include "Delfin.h"
#include <iostream>
using namespace std;

Delfin::Delfin(int edad,string nombre,string habitat):Animal(edad ,nombre ){
	this->edad=edad;
	this->nombre=nombre;
	this->habitat=habitat;
}

void Delfin::Mensaje() const{
	cout<<"El animal es un delfin con nombre: "<<this->nombre<<" con una edad de: "<<this->edad<<" y habita en: "<<this->habitat<<endl;
}
