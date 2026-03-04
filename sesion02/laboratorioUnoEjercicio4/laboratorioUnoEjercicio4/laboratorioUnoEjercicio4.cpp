#include "Funciones.h"
#include <string>
#include <iostream>

int main()
{
    std::string nombreCompleto;

    std::cout << "Ingrese su nombre completo (Nombre, Primer apellido, Segundo apellido): " << std::endl;
    std::getline(std::cin, nombreCompleto);

    primerNombre(nombreCompleto);
    primerApellido(nombreCompleto);
    cantidadDeVocales(nombreCompleto);
    nombreEnMayusculas(nombreCompleto);
    longitudTotal(nombreCompleto);
}


