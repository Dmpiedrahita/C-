#ifndef PUNTO3_H
#define PUNTO3_H
#include <string>
using namespace std;

class Animal
{
	protected:
		int edad;
		string nombre;		
		
	public:
		Animal(int edad,string nombre);
		int getEdad() const;
		string getNombre() const;
		void setEdad(int edad);
	
};

#endif
