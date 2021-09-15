#include "Triangulo.h"

Triangulo::Triangulo(double base,double altura):Figura(alto, ancho){
	this->alto=altura;
	this->ancho=base;
}

double Triangulo::getArea(){
	return (alto*ancho)/2;
}
