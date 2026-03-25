#include "Vehiculo.h"
#include <string>
#include <iostream>

namespace UNA {

	Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje) :placa(placa),
		marca(marca), anio(anio), kilometraje(kilometraje), activo(true) {
	}

	std::string Vehiculo::getPlaca() const {
		return placa;
	}
	std::string Vehiculo::getMarca() const {
		return marca;
	}
	int Vehiculo::getAnio() const {
		return anio;
	}
	double Vehiculo::getKilometraje() const {
		return kilometraje;
	}
	bool Vehiculo::estaActivo() const {
		return activo;
	}

	void Vehiculo::registrarKilometros(double km) {
		if (km > 0 && activo) {
			kilometraje = kilometraje + km;
		}
		else {
			std::cout << "Error: no se pueden registrar kilometros" << std::endl;
		}
	}
	void Vehiculo::desactivar() {
		if (activo == false) {
			std::cout << "Error: ya el vehiculo está inactivo" << std::endl;
		}
		else {
			activo = false;
		}
	}
	void Vehiculo::reactivar() {
		if (activo == true) {
			std::cout << "Error: ya el vehiculo está activo" << std::endl;
		}
		else {
			activo = true;
		}
	}

	void Vehiculo::mostrar() const {
		std::cout << "Placa: " << getPlaca() << std::endl;
		std::cout << "Marca: " << getMarca() << std::endl;
		std::cout << "Anio: " << getAnio() << std::endl;
		std::cout << "Kilometraje: " << getKilometraje() << std::endl;
		if (estaActivo() == true) {
			std::cout << "ACTIVO" << std::endl;
		}
		else {
			std::cout << "FUERA DE SERVICIO" << std::endl;
		}


	}

}






