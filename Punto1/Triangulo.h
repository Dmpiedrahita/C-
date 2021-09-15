#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura
{
	public:
	Triangulo(double base,double altura);
	double getArea();	
};

#endif
