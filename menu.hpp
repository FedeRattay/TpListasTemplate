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

		void mostrarPeliculas(Lista<Pelicula> *);
		//pre:Se ingresan dos listas.
		//pos:crea una lista de peliculas recomendadas a partir de la coincidencia de datos especificos.
		void crearPeliculasRecomendadas(Lista<Pelicula> *, Lista<Pelicula> *, Lista<Pelicula> *);

	public:
		void mostrarMenu();
		//pre:Se ingresa una lista.
		//pos:lee desde el archivo los datos y los ingresa en una lista.
		void cargarDesdeArchivo(Lista<Pelicula> *);
		//pre:Se ingresan dos listas de actores.
		//pos:Devuelve un verdadero si hay coincidencia de actores y falso sino.
		bool obteneCoincidenciaDeActores(Lista<string> *, Lista<string> *);
		//pre:Se ingresa una lista.
		//pos:Ejecuta la opcion elegida.
		void ejecutarOpcion(Lista<Pelicula> *, Lista<Pelicula> *, Lista<Pelicula> *);
		bool obtenerSalir();

		//Metodos setters/getters
		void ingresarOpcion(int);
		int obtenerOpcion();
};

#endif
