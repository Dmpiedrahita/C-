#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using namespace std;


class Figura
{
	protected:
		double alto;
		double ancho;
	public:
		Figura(double alto,double ancho);
		double getAlto() const;
		double getAncho() const;
		void setAlto(double alto);
		void setAncho (double ancho);
		virtual void display ()const;
	
};

#endif
