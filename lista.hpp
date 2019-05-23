#ifndef LISTA_HPP
#define LISTA_HPP
#include "nodo.hpp"
template < typename Dato >
class Lista
{
	private:
		//Primer elemento de la lista
		Nodo<Dato>* primero;
		//Tamanio de la lista
		int tamanio;
		//Obtener nodo en una posicion
		//PRE: Debe de existir un nodo
		//POST: Devuelve el nodo en una posicion
		Nodo<Dato>* obtenerNodo(int posicion);

	public:
		//Constructor
		//POST: Crea una lista con el primer elemento apuntando a NULL y tamanio 0
		Lista();
		//Obtener tamanio
		//PRE: Debe de existir un nodo
		//POST: Devuelve el tamanio de la lista
		int obtenerTamanio();
		//Agrega un dato a la lista
		//PRE: El dato debe ser de un tipo valido
		//POST: Agrega un nodo con el tipo dato y aumenta el tamanio en 1
		void agregar(Dato* _dato);
		//Remueve un nodo y su dato
		//PRE: La lista no puede estar vacia 
		//POST: Remueve el nodo con su tipo de dato y disminuye el tamanio en 1
		void remover(int posicion);
		//Consulta el tamanio
		//PRE: La no puede estar vacia
		//POST: Devuelve el nodo con su dato en la posicion
		Dato* consultar(int posicion);
		//Esta vacio?
		//POST : Devuelve True si la lista esta vacia y False si no
		bool estaVacia();
		//Destructor
		~Lista();
};



#endif
