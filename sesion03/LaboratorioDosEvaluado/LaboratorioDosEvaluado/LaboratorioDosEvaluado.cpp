#include "Paquetes.h"

#include <iostream>

int main()
{
	int cantidad = 0;
	double limite = 100;
	double* arregloPesos = new double[cantidad];
	crearRegistro(cantidad);
	ingresarPesos(arregloPesos, cantidad);
	double sumador = calcularPesosTotal(arregloPesos, cantidad);
	std::cout << "El peso total es: " << sumador << std::endl;
	int contador = contarSobreLimite(arregloPesos, cantidad, limite);
	std::cout << "Los paquetes que pesan mas del limite son: " << contador << std::endl;
	double mayorPeso = *buscarMasPesado(arregloPesos, cantidad);
	std::cout << "El paquete de mayor peso es: " << mayorPeso << std::endl;


}
