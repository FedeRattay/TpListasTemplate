#ifndef NODO_HPP
#define NODO_HPP
#include <iostream>
using namespace std;
template<typename Dato>
class Nodo
{
	private:
		Dato* dato;
		Nodo* punteroSiguiente;
	public:
		//Constructor 
		//POST: Crea un nodo con dato y puntero vacio
		Nodo();
		//Constructor con parametro
		//POST: Crea un nodo con el el dato _dato y el puntero a NULL
		Nodo(Dato* _dato);
		//Setea el dato
		//PRE: El nodo tiene que estar creado y _dato tiene que ser un dato valido
		//POST: El nodo queda con el dato _dato
		void asignarDato(Dato* _dato);
		//Setea el punteroSiguiente
		//PRE: nodo creado y punteroSiguiente valido
		//POST: el puntero siguiente apunta a un puntero
		void asignarSiguiente(Nodo* _punteroSiguiente);
		//Obtener dato
		//PRE: nodo creado
		//POST: devuelve el dato que contiene el nodo
		Dato* obtenerDato();
		//Obtener punteroSiguiente
		//PRE: nodo creado
		//POST: devuelve el puntero al siguiente nodo, si es el ultimo devuelve NULL
		Nodo* obtenerSiguiente();
};

//Constructor
template < typename Dato >
Nodo<Dato>::Nodo(){
	dato = NULL;
	punteroSiguiente = NULL;
}
// Constructor con parametro
template < typename Dato >
Nodo<Dato>::Nodo(Dato* _dato){
	dato = _dato;
	punteroSiguiente = NULL;
}
//Asignar dato
template < typename Dato >
void Nodo<Dato>::asignarDato(Dato* _dato){
	dato = _dato;
}
//Asignar puntero al siguiente
template < typename Dato >
void Nodo<Dato>::asignarSiguiente(Nodo* _punteroSiguiente){
	punteroSiguiente = _punteroSiguiente;
}
//Obtener dato
template < typename Dato >
Dato* Nodo<Dato>::obtenerDato(){
	return dato;
}
//Obtener puntero al siguiente nodo
template < typename Dato >
Nodo<Dato>* Nodo<Dato>::obtenerSiguiente(){
	return punteroSiguiente;
}
#endif

