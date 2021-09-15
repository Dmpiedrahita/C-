#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"
using namespace std;

class Rectangulo : public Figura
{

	public:
		Rectangulo(double alto,double ancho);
		double getArea();
		
};

#endif
