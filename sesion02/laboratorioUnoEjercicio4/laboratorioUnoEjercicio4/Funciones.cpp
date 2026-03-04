#include "Funciones.h"
#include <algorithm>
#include <cctype>

void primerNombre(std::string nombreCompleto)
{
	size_t posi = nombreCompleto.find(' ');
	std::string nombre = nombreCompleto.substr(0, posi);
	std::cout << "Primer nombre: " << nombre << std::endl;
}

void primerApellido(std::string nombreCompleto)
{
	size_t posi1 = nombreCompleto.find(' ');
	size_t posi2 = nombreCompleto.find(' ', posi1 + 1);
	std::string apellido = nombreCompleto.substr(posi1 + 1, posi2 - posi1 - 1);
	std::cout << "Primer apellido: " << apellido << std::endl;
}

void cantidadDeVocales(std::string nombreCompleto)
{
	int contadorVocales = 0;
	for (char c : nombreCompleto) {
		char letra = std::tolower(c);
		if (letra == 'a' || letra == 'e' || letra == 'i' ||
			letra == 'o' || letra == 'u')
		{
			contadorVocales++;
		}
	}

	std::cout << "Cantidad de vocales: " << contadorVocales << std::endl;

}

void nombreEnMayusculas(std::string nombreCompleto)
{
	std::transform(nombreCompleto.begin(), nombreCompleto.end(), nombreCompleto.begin(), ::toupper);
	std::cout << "Nombre en mayuscula: " << nombreCompleto << std::endl;
}

void longitudTotal(std::string nombreCompleto)
{
	std::cout << "Longitud total: " << nombreCompleto.length() << std::endl;
}
