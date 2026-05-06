#include "Colonia.h"

Colonia::Colonia(std::string nombre, std::string planeta, int cantidadDomos) {
	this->nombre = nombre;
	this->planeta = planeta;
	this->cantidadDomos = cantidadDomos;
	domos = new Domo * [cantidadDomos];

}

Colonia::~Colonia() {

	for (int i = 0; i < cantidadDomos; i++) {
		delete domos[i];
	}
	delete[] domos;
}

 void Colonia::agregarDomo(int pos, Domo* d) {
	
	if (pos >= 0 && pos < cantidadDomos) {
		domos[pos] = d;
	}
}

