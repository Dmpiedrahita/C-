#ifndef DELFIN_H
#define DELFIN_H
#include <string>
#include "Animal.h"

class Delfin : public Animal
{
	private:
		string habitat;
	public:
		Delfin(int edad,string nombre,string habitat);
		void Mensaje() const;
};

#endif
