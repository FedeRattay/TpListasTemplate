#ifndef PELICULA_HPP
#define PELICULA_HPP

#include <iostream>
#include <string>
using namespace std;
#include persona.hpp

class Pelicula
{
	private:
		string nombre;
		string genero;
		int puntaje;
		Director* _director;
		Actor* _actor;
	public:
		Pelicula();
		Pelicula(string _nombre,string _genero,int _puntaje,Director* _director,Actor* _actor);
		~Pelicula();

		void asignarNombre(string _nombre);
		void asignarGenero(string _genero);
		void asignarPuntaje(int _puntaje);
		void asignarDirector(Director* _director);
		void asignarActor(Actor* _actor);
		string obtenerNombre();
		string obtenerGenero();
		int obtenerPuntaje();
		Director obtenerDirector();
		Actor obtenerActor();
		
};
#endif
