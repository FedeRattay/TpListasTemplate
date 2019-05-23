#ifndef LISTA_HPP
#define LISTA_HPP
#include "nodo.hpp"

class Lista
{
	private:
		Nodo *primero;
		int tamanio;
		Nodo *obtenerNodo(int posicion);

	public:
		Lista();
		int obtenerTamanio();
		void agregar(Dato* _dato);
		void remover(int posicion);
		Dato* consultar(int posicion);
		bool estaVacia();
		~Lista();
};
#endif
