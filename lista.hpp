#ifndef LISTA_HPP
#define LISTA_HPP
#include "nodo.hpp"
#include <string>
#include <iostream>
using namespace std;
template < typename Dato >
class Lista
{
	private:
		//Primer elemento de la lista
		Nodo<Dato>* head;
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

//Constructor
template < typename Dato >
Lista<Dato>::Lista(){
	head = NULL;
	tamanio = 0;
}
//Obtener Nodo
template < typename Dato >
Nodo<Dato>* Lista<Dato>::obtenerNodo(int posicion){
	Nodo<Dato>* actual = head;
    for (int i = 1; i < posicion; i++)
    {
        actual = actual->obtenerSiguiente();
    }
    return actual;
}
//Obtener tamanio
template < typename Dato >
int Lista<Dato>::obtenerTamanio(){
	return tamanio;
}
//Verifica si la lista esta vacia
template < typename Dato >
bool Lista<Dato>::estaVacia(){
	return ( head == NULL ? true : false );
}
//Agregar un nodo con un dato a la lista
template < typename Dato >
void Lista<Dato>::agregar(Dato* unDato){
	Nodo<Dato>* nuevo = new Nodo(unDato);
	if(estaVacia())
		head = nuevo;
	else{
		nuevo->asignarSiguiente(head);
		head = nuevo;
	}
	tamanio++;
}

template < typename Dato >
Lista<Dato>::~Lista(){
	while(tamanio > 0){
		Nodo<Dato>* iterador = head;
		Dato* datoActual = iterador -> obtenerDato();
		delete datoActual;
		head -> asignarSiguiente(iterador -> obtenerSiguiente());
		delete iterador;
		tamanio--;
	}
}

template < typename Dato >
Dato* Lista<Dato>::consultar(int posicion){
	Nodo<Dato> *consultado = obtenerNodo(posicion);
    return consultado->obtenerDato();
}

#endif
