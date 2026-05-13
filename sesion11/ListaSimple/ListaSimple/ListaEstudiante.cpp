#include "ListaEstudiante.h"

namespace EIF201 {
	Nodo::Nodo(Estudiante* e) : dato(e), siguiente(nullptr){}

	Nodo::~Nodo() {
		delete dato;
		dato = nullptr;
	}

	ListaEstudiante::ListaEstudiante(): cabeza(nullptr), cantidad(0){}

	ListaEstudiante::~ListaEstudiante() {
		Nodo* temp = cabeza;

		while (temp != nullptr) {
			Nodo* siguiente = temp->siguiente;
			delete temp;
			temp = siguiente;
		}

		cabeza = nullptr;
		cantidad = 0;
	}

	void ListaEstudiante::insertarAlInicio(Estudiante* nuevo) {
		if (nuevo == nullptr) {
			return;
		}
		Nodo* nodoNuevo = new Nodo(nuevo);
		nodoNuevo->siguiente = cabeza;
		cabeza = nodoNuevo;
		cantidad++;
	}

	void ListaEstudiante::insertarAlFinal(Estudiante* nuevo) {
		if (nuevo == nullptr) {
			return;
		}
		Nodo* nodoNuevo = new Nodo(nuevo);
		if (cabeza = nullptr) {
			cabeza = nodoNuevo;
		}
		else {
			Nodo* temp = cabeza;
			while (temp->siguiente != nullptr) {
				temp = temp->siguiente;
			}
			temp->siguiente = nodoNuevo;
		}
		cantidad++;
	}

	Estudiante* ListaEstudiante::buscarPorCarnet(const std::string& carnet) const {
		Nodo* temp = cabeza;
		while (temp != nullptr) {
			if (temp->dato->getCarnet() == carnet) {
				return temp->dato;
			}
			temp = temp->siguiente;
		}
		return nullptr;
	}

	bool ListaEstudiante::eliminarPorCarnet(const std::string& carnet){
		if (cabeza == nullptr) {
			return false;
		}
		if (cabeza->dato->getCarnet() == carnet) {
			Nodo* eliminar = cabeza;
			cabeza = cabeza->siguiente;
			delete eliminar;
			cantidad--;
			return true;
		}
		Nodo* anterior = cabeza;
		Nodo* actual = cabeza->siguiente;
		while (actual != nullptr) {
			if (actual->dato->getCarnet() == carnet) {
				anterior->siguiente= actual->siguiente;
				delete actual;
				cantidad--;
				return true;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		return false;
	}

}