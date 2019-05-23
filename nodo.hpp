#ifndef NODO_HPP
#define NODO_HPP
#include "persona.hpp"
class Nodo
{
    private:
        Dato* dato;
        Nodo* punteroSiguiente;
    public:
        Nodo();
        Nodo(Dato* _dato);
        Nodo(Dato* _dato, Nodo* _puntero);

        void asignarElemento(Persona* _dato);
        void asignarSiguiente(Nodo* _puntero);
        Dato* obtenerElemento();
        Nodo* obtenerSiguiente();
};
#endif
