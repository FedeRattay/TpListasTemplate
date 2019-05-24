#include "pelicula.hpp"

void Pelicula::asignarNombre(string _nombre)
{
	nombre = _nombre;
}
void Pelicula::asignarGenero(string _genero)
{
	genero = _genero;
}
void Pelicula::asignarPuntaje(int _puntaje)
{
	puntaje = _puntaje;
}
void Pelicula::asignarDirector(string _director)
{
	director = _director;
}
void Pelicula::asignarActor(string _actor)
{
	actores->agregar(&(_actor));
}
string Pelicula::obtenerNombre()
{
	return nombre;
}
string Pelicula::obtenerGenero()
{
	return genero;
}
int Pelicula::obtenerPuntaje()
{
		return puntaje;
}
	string Pelicula::obtenerDirector()
{
		return director;
}
string Pelicula::obtenerActor(int posicion)
{
	return *(actores->consultar(posicion));
}
