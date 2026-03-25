#include "Flota.h"
#include <string>
#include <iostream>

namespace UNA {

	Flota::Flota(int cantidadInicial) : cantidad(0), capacidad(cantidadInicial) {
		vehiculos = new Vehiculo * [cantidadInicial];
		for (int i = 0; i < capacidad; i++) {
			vehiculos[i] = nullptr;
		}
	}
	Flota::~Flota() {
		for (int i = 0; i < cantidad; i++) {
			delete vehiculos[i];
			vehiculos[i] = nullptr;
		}

		delete[] vehiculos;
		vehiculos = nullptr;
		std::cout << "Flota destruida";
	}
	void Flota::agregar(Vehiculo* nuevo) {

		if (nuevo == nullptr) {
			std::cout << "Error";
			return;
		}

		if (cantidad == capacidad) {
			int nuevaCapacidad = capacidad * 2;
			Vehiculo** nuevoArreglo = new Vehiculo * [nuevaCapacidad];

			for (int i = 0; i < cantidad; i++) {
				nuevoArreglo[i] = vehiculos[i];
			}

			for (int i = cantidad; i < nuevaCapacidad; i++) {
				nuevoArreglo[i] = nullptr;
			}

			delete[] vehiculos;
			vehiculos = nuevoArreglo;
			capacidad = nuevaCapacidad;
		}

		vehiculos[cantidad] = nuevo;
		cantidad++;
	}

	Vehiculo* Flota::buscarPorPlaca(std::string placa) const {
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				return vehiculos[i];
			}
		}
		return nullptr;
	}


	void Flota::mostrarPorMarca(std::string marca) const {
		int contador = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getMarca() == marca) {
				vehiculos[i]->mostrar();
				contador++;
			}
		}
		if (contador == 0) {
			std::cout << "No hay vehiculos de marca " << marca << std::endl;
		}
	}


	int Flota::contarActivos() const {
		int contador = 0;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->estaActivo()) {
				contador++;
			}
		}

		return contador;
	}

	void Flota::mostrarTodos() const {
		if (cantidad == 0) {
			std::cout << "No hay vehiculos en la flota" << std::endl;
			return;
		}

		std::cout << "----- Flota -----" << std::endl;

		for (int i = 0; i < cantidad; i++) {
			vehiculos[i]->mostrar();
		}

	}

	bool Flota::eliminar(std::string placa) {
		int posicion = -1;

		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				posicion = i;
				break;
			}
		}

		if (posicion == -1) {
			std::cout << "Vehiculo no encontrado" << std::endl;
			return false;
		}

		if (vehiculos[posicion]->estaActivo()) {
			std::cout << "No se puede eliminar un vehiculo activo" << std::endl;
			return false;
		}

		std::string placaEliminada = vehiculos[posicion]->getPlaca();

		delete vehiculos[posicion];

		for (int i = posicion; i < cantidad - 1; i++) {
			vehiculos[i] = vehiculos[i + 1];
		}

		vehiculos[cantidad - 1] = nullptr;
		cantidad--;

		std::cout << "Placa " << placaEliminada << " eliminada de la flota" << std::endl;

		return true;
	}

}

