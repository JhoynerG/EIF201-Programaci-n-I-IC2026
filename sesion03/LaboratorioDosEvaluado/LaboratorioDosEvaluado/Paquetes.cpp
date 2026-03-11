#include "Paquetes.h"
#include <iostream>
double* crearRegistro(int& cantidad)
{
    std::cout << "Ingrese la cantidad de paquetes que llegaron: " << std::endl;
    std::cin >> cantidad;
    double* arregloCantidad = new double[cantidad];
    return arregloCantidad;
}

void ingresarPesos(double* pesos, int cantidad)
{
    int kilos = 0;
    for (int i = 0; i < cantidad; i++) {
        do {
            std::cout << "Ingrese el peso de cada paquete: " << std::endl;
            std::cin >> kilos;
        } while (kilos <= 0);
        pesos[i] = kilos;
    }

}

double calcularPesosTotal(const double* pesos, int cantidad)
{
    double sumador = 0;
    for (int i = 0; i < cantidad; i++) {
        sumador += pesos[i];
    }
    
    return sumador;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite)
{
    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        if (pesos[i] > limite) {
            contador = contador + 1;
        }
    }
    return contador;
}

const double* buscarMasPesado(const double* pesos, int cantidad)
{
    double mayorPeso = pesos[0];
    for (int i = 0; i < cantidad; i++) {
        if (pesos[i] > mayorPeso) {
            mayorPeso = pesos[i];
        }
    }
    return &mayorPeso;
}
