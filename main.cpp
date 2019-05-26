#include "menu.hpp"
using namespace std;

int main()
{
    Lista<Pelicula> *peliculasVistas = new Lista<Pelicula>;
    Lista<Pelicula> *peliculasNoVistas = new Lista<Pelicula>;
    Lista<Pelicula> *peliculasRecomendas = new Lista<Pelicula>;
    Menu menuNuevo;
    cout << "Peliculas vistas: " << endl;
    menuNuevo.cargarDesdeArchivo(peliculasVistas);
    cout << "Peliculas no vistas: " << endl;
    menuNuevo.cargarDesdeArchivo(peliculasNoVistas);

    while (!menuNuevo.obtenerSalir())
    {
        menuNuevo.mostrarMenu();
        menuNuevo.ejecutarOpcion(peliculasVistas, peliculasNoVistas, peliculasRecomendas);
    }

    delete peliculasVistas;
    delete peliculasNoVistas;
    delete peliculasRecomendas;

    return 0;
}