#include "Domo.h"

Domo::Domo(int id, TipoDomo tipo, double capacidadOxigeno, int maxOcupantes) {
	this->id = id;
	this->tipo = tipo;
	this->capacidadOxigeno = capacidadOxigeno;
	this->maxOcupantes = maxOcupantes;


	cantidadColonos = 0;
	sellado = false;
	colonos = new Colono * [maxOcupantes];
}