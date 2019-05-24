#ifndef PELICULA_HPP
#define PELICULA_HPP

#include <iostream>
#include <string>
using namespace std;
#include "lista.hpp"


class Pelicula
{
	private:
		string nombre;
		string genero;
		int puntaje;
		string director;
		Lista<string>* actores;
	public:
		Pelicula();
		Pelicula(string _nombre,string _genero,int _puntaje,string _director);
		~Pelicula();

		void asignarNombre(string _nombre);
		void asignarGenero(string _genero);
		void asignarPuntaje(int _puntaje);
		void asignarDirector(string _director);
		void asignarActor(string _actor);
		string obtenerNombre();
		string obtenerGenero();
		int obtenerPuntaje();
		string obtenerDirector();
		string obtenerActor(int posicion);
		
};

#endif