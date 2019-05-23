#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <string>
using namespace std;

class Persona
{
	protected:
		string nombre;
		string tipoPersona;		//ACTOR O DIRECTOR
	public:
		Persona();
		Persona(string _nombre, string _tipoPersona);
		~Persona();
		
		void asignarNombre(string _nombre);
		void asignarTipoPersona(string _tipoPersona);
		string obtenerNombre();
		string obtenerTipoPersona();
};

#endif
