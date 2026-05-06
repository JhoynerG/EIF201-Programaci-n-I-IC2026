#ifndef COLONIA_H
#define COLONIA_H

#include <string>
#include "Domo.h"

class Colonia
{
private:
	std::string nombre;
	std::string planeta;

	Domo** domos;
	int cantidadDomos;

public:
	Colonia(std::string nombre, std::string planeta, int cantidadDomos);

	~Colonia();

	void agregarDomo(int pos, Domo* d);


};

#endif
