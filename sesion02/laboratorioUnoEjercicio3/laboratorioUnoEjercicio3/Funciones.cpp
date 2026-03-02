#include "Funciones.h"
#include <iostream>
#include <iomanip>

void leerMatriz(matriz& m)
{
    for (size_t i = 0; i < FILAS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            std::cin >> m[i][j];
        }
             
    }
        
}

void imprimirMatriz(matriz& m)
{
    std::cout << "Matriz: " << std::endl;
    for (size_t i = 0; i < FILAS; i++) {
        for (size_t j = 0; j < COLS; j++) {
            std::cout << std::setw(6) << m[i][j];
        }
        std::cout << '\n';
    }
        
}

void sumarFilas(matriz& m) {
   
    for (size_t i = 0; i < FILAS; i++) {
        int sumadorF = 0;
        for (size_t j = 0; j < COLS; j++) {
            sumadorF = sumadorF + m[i][j];
        }
        std::cout << "Suma de fila " << i+1 << ": " << sumadorF << '\n';
    }
}

void sumarColumnas(matriz& m) {

    for (size_t i = 0; i < COLS; i++) {
        int sumadorC = 0;
        for (size_t j = 0; j < FILAS; j++) {
            sumadorC = sumadorC + m[j][i];
        }
        std::cout << "Suma de Columna " << i + 1 << ": " << sumadorC << '\n';
    }
}

void sumarDiagonal(matriz& m) {

    int sumadorD = 0;

    for (size_t i = 0; i < FILAS; i++)
        sumadorD += m[i][i];

    std::cout << "Suma diagonal: " << sumadorD << '\n';
}
