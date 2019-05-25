#ifndef MENU_HPP
#define MENU_HPP

#include "lista.hpp"
#include "pelicula.hpp"
#include <string>
using namespace std;

class Menu
{
	private:
		int opcion;
		bool salir;

		void mostrarPeliculas(Lista<Pelicula>*);
        void darBajaPeliculas(Lista<Pelicula>*);
        void argregarPeliculas(Lista<Pelicula>*);
        Lista<Pelicula>* crearPeliculasRecomendadas(Lista<Pelicula>*,Lista<Pelicula>*);
		
	public:
		void mostrarMenu();
		void cargarDesdeArchivo(Lista<Pelicula>*);
		//pre:Se ingresa una lista.
		//pos:Ejecuta la opcion elegida.
		void ejecutarOpcion(Lista<Pelicula>*,Lista<Pelicula>*,Lista<Pelicula>*);
		bool obtenerSalir();

		//Metodos setters/getters
		void ingresarOpcion(int);
		int obtenerOpcion();
};

#endif
