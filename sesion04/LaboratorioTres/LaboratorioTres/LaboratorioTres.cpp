#include <string>
#include "Flota.h"

#include <iostream>
using namespace UNA;

int mostrarMenu() {
    int opcion;

    std::cout << "\n----- MENU -----\n";
    std::cout << "1. Registrar vehiculo\n";
    std::cout << "2. Buscar vehiculo por placa\n";
    std::cout << "3. Mostrar vehiculos por marca\n";
    std::cout << "4. Registrar kilometros\n";
    std::cout << "5. Desactivar vehiculo\n";
    std::cout << "6. Reactivar vehiculo\n";
    std::cout << "7. Eliminar vehiculo\n";
    std::cout << "8. Mostrar flota completa\n";
    std::cout << "9. Mostrar cantidad de activos\n";
    std::cout << "10. Salir\n";
    std::cout << "Opcion: ";

    std::cin >> opcion;
    std::cin.ignore();

    return opcion;
}

int main()
{
    Flota flota;
    bool ejecutando = true;

    while (ejecutando) {
        int opcion = mostrarMenu();

        switch (opcion) {

        case 1: {
            std::string placa, marca;
            int anio;
            double km;

            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            std::cout << "Marca: ";
            std::getline(std::cin, marca);

            std::cout << "Anio: ";
            std::cin >> anio;

            std::cout << "Kilometraje: ";
            std::cin >> km;
            std::cin.ignore();

            Vehiculo* v = new Vehiculo(placa, marca, anio, km);
            flota.agregar(v);

            break;
        }

        case 2: {
            std::string placa;
            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->mostrar();
            }
            else {
                std::cout << "Vehiculo no encontrado\n";
            }

            break;
        }

        case 3: {
            std::string marca;
            std::cout << "Marca: ";
            std::getline(std::cin, marca);

            flota.mostrarPorMarca(marca);
            break;
        }

        case 4: {
            std::string placa;
            double km;

            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                std::cout << "Kilometros a agregar: ";
                std::cin >> km;
                std::cin.ignore();

                v->registrarKilometros(km);
            }
            else {
                std::cout << "Vehiculo no encontrado\n";
            }

            break;
        }

        case 5: {
            std::string placa;
            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->desactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado\n";
            }

            break;
        }

        case 6: {
            std::string placa;
            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            Vehiculo* v = flota.buscarPorPlaca(placa);

            if (v != nullptr) {
                v->reactivar();
            }
            else {
                std::cout << "Vehiculo no encontrado\n";
            }

            break;
        }

        case 7: {
            std::string placa;
            std::cout << "Placa: ";
            std::getline(std::cin, placa);

            flota.eliminar(placa);
            break;
        }

        case 8:
            flota.mostrarTodos();
            break;

        case 9:
            std::cout << "Vehiculos activos: "
                << flota.contarActivos() << std::endl;
            break;

        case 10:
            ejecutando = false;
            break;

        default:
            std::cout << "Opcion invalida\n";
        }
    }

    return 0;
   
}

