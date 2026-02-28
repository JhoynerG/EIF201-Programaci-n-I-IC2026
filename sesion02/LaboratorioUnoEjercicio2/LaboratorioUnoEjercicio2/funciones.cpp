#include "funciones.h"
#include <iostream>

void ListaInversa(const std::array<int, 20>& arreglo, std::array<int, 20>&arregloIvert, int valores)
{
    for (int i = 0; i < valores; i++) {
        arregloIvert[i] = arreglo[valores - 1 - i];
    }
    
}
