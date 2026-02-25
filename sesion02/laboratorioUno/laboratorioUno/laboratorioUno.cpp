// laboratorioUno.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include "Funciones.h"
using namespace std;

int main()
{
    array<int, 10> arregloNum;
    for (size_t i = 0; i < arregloNum.size(); i++) {
        cout << "Ingrese un numero entero: " << endl;
        cin >> arregloNum[i];
    }
    cout << "El mayor es: " << numMayor(arregloNum) << endl;
    cout << "El menor es: " << numMenor(arregloNum) << endl;
    cout << "La suma es: " << sumaArray(arregloNum) << endl;
    cout << "El promedio es: " << promedioAritmetico(arregloNum) << endl;
    
}

