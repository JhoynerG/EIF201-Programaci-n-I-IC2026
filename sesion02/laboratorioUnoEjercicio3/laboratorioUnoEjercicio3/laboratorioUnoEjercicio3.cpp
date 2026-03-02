
#include <iostream>
#include <array>
#include "Funciones.h"

int main()
{
    matriz m{};

    std::cout << "Ingrese los valores de la matriz (9)" << std::endl;
    leerMatriz(m);
    std::cout << "--------------------------------" << std::endl;
    imprimirMatriz(m);
    std::cout << "--------------------------------" << std::endl;
    sumarFilas(m);
    std::cout << "--------------------------------" << std::endl;
    sumarColumnas(m);
    std::cout << "--------------------------------" << std::endl;
    sumarDiagonal(m);
}


