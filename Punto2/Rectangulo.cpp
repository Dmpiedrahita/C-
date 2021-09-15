#include "Rectangulo.h"

Rectangulo::Rectangulo(double alto,double ancho):Figura(alto, ancho){
	this->alto=alto;
	this->ancho=ancho;
}

double Rectangulo::getArea ()const{
	return alto*ancho;
}

void Rectangulo::display ()const{
	cout<<"\nClase hija de clase Figura. ";
	
}



