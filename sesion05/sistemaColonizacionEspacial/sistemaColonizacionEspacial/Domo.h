#ifndef DOMO_H
#define DOMO_H

#include "Colono.h"
#include <string>

enum TipoDomo {
	LABORATORIO, INGENIERIA, HABITAT
};

class Domo
{
private:
	int id;
	Colono** colonos;
	int cantidadColonos;
	double capacidadOxigeno;
	int maxOcupantes;
	TipoDomo tipo;
	bool sellado;

public:
	Domo(int id, TipoDomo tipo, double capacidad, int max);
	bool agregarColono(Colono* c);
};

#endif