
#include <array>
#include <iostream>
#include "funciones.h"

int main()
{
	int ingresar = 0;
	int valores = 0;
	int num = 0;
	std::array<int, 20> arregloInvert;
	std::array<int, 20>arreglo;
	
	do {
		std::cout << "Cuantos valores desea agregar? Maximo 20 valores" << std::endl;
		std::cin >> valores;
	} while (valores > 20);

	for (size_t i = 0; i < valores; i++) {
		std::cout << "Valor " << i + 1 << std::endl;
		std::cin >> arreglo[i];
	}

	ListaInversa(arreglo, arregloInvert, valores);

	std::cout << "Lista: ";
	for (size_t i = 0; i < valores; i++) {
		std::cout << arreglo[i] << "  ";
	}

	std::cout << " " << std::endl;

	std::cout << "Lista Invertida: ";
	for (size_t i = 0; i < valores; i++) {
		std::cout << arregloInvert[i] << "  ";
	}
	
   
}


