#include "Figura.h"


Figura::Figura(double alto,double ancho){
	this->alto=alto;
	this->ancho=ancho;
}

void Figura::setAlto(double alto){
	this->alto=alto;
}

void Figura::setAncho(double ancho){
	this->ancho=ancho;
}

double Figura::getAlto() const{
	return this->alto;
}

double Figura::getAncho() const{
	return this->ancho;
}


