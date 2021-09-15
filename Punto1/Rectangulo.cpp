#include "Rectangulo.h"

Rectangulo::Rectangulo(double alto,double ancho):Figura(alto, ancho){
	this->alto=alto;
	this->ancho=ancho;
}

double Rectangulo::getArea(){
	return alto*ancho;
}



