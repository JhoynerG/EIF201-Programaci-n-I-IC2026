#include "Funciones.h"

int sumaArray(const array<int, 10> arregloNum)
{
    int suma = 0;
    for (size_t i = 0; i < arregloNum.size(); i++) {
        suma = suma + arregloNum[i];
    }
    return suma;
}

double promedioAritmetico(const array<int, 10> arregloNum)
{
    double promedio = 0;
        double suma = 0;
        suma = sumaArray(arregloNum);
        promedio = suma / 10;
        return promedio;
}

int numMayor(const array<int, 10> arregloNum)
{
    int mayor = arregloNum[0];

    for (size_t i = 0; i < arregloNum.size(); i++) {
        if (arregloNum[i] > mayor) {
            mayor = arregloNum[i];
        }
    }
    return mayor;
}

int numMenor(const array<int, 10> arregloNum)
{
    int menor = arregloNum[0];

    for (size_t i = 0; i < arregloNum.size(); i++) {
        if (arregloNum[i] < menor) {
            menor = arregloNum[i];
        }
    }
    return menor;
}
