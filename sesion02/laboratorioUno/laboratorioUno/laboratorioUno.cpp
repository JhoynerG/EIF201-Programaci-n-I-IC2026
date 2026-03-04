// laboratorioUno.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include "Funciones.h"

int main()
{
    std::array<int, 10> arregloNum;
    for (size_t i = 0; i < arregloNum.size(); i++) {
        std::cout << "Ingrese un numero entero: " << std::endl;
        std::cin >> arregloNum[i];
    }
    std::cout << "El mayor es: " << numMayor(arregloNum) << std::endl;
    std::cout << "El menor es: " << numMenor(arregloNum) << std::endl;
    std::cout << "La suma es: " << sumaArray(arregloNum) << std::endl;
    std::cout << "El promedio es: " << promedioAritmetico(arregloNum) << std::endl;
    
}

