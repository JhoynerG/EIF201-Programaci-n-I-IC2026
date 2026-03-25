#ifndef FLOTA_H
#define FLOTA_H
#include <iostream>
#include <string>
#include "Vehiculo.h"

namespace UNA {

	class Flota
	{

	private:
		int cantidad;
		int capacidad;
		Vehiculo** vehiculos;

	public:
		Flota(int capacidadInicial = 3);
		~Flota();

		void agregar(Vehiculo* nuevo);
		Vehiculo* buscarPorPlaca(std::string placa) const;
		void mostrarPorMarca(std::string marca) const;
		int contarActivos() const;
		void mostrarTodos() const;
		bool eliminar(std::string placa);


	};

}


#endif // FLOTA_H

