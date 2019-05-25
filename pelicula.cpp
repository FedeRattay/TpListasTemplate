#include "pelicula.hpp"

Pelicula::Pelicula()
{
	nombre = "";
	genero = "";
	puntaje = 0;
	director = "";
	actores = new Lista<string>();
}
Pelicula::Pelicula(string _nombre,string _genero,int _puntaje,string _director)
{
	nombre = _nombre;
	genero = _genero;
	puntaje = _puntaje;
	director = _director;
	actores = new Lista<string>();
}
Pelicula::~Pelicula()
{
	delete actores;
}
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

void Pelicula::mostrarPelicula()
{
	cout<<"Pelicula: "<<nombre<<endl;
	cout<<"Genero: "<<genero<<endl;
	cout<<"Puntaje: "<<puntaje<<endl;
	cout<<"Director: "<<director<<endl;
	cout<<"Actores: ";
	for(int i = 0; i<actores->obtenerTamanio(); i++)
	{	string nombre = obtenerActor(i);
		cout<<nombre<<endl;
	}
	cout<<"---------------------------------------"<<endl;
}