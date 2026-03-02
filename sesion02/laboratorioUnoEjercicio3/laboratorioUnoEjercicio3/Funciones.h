#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <array>

constexpr size_t FILAS = 3;
constexpr size_t COLS = 3;
using matriz = std::array<std::array<int, COLS>, FILAS>;

void leerMatriz (matriz& m);
void imprimirMatriz(matriz& m);
void sumarFilas(matriz& m);
void sumarColumnas(matriz& m);
void sumarDiagonal(matriz& m);


#endif 


