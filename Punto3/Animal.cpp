#include "Animal.h"

Animal::Animal(int edad,string nombre){
	this->edad=edad;
	this->nombre=nombre;
}

int Animal::getEdad() const{
	return edad;
}

string Animal::getNombre() const{
	return nombre;
}

void Animal::setEdad(int edad){
	this->edad=edad;
}


