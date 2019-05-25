#include "menu.hpp"
using namespace std;

int main()
{
    /*Lista<Pelicula>* peliculasVistas = new Lista<Pelicula>;
    Lista<Pelicula>* peliculasNoVistas = new Lista<Pelicula>;
    Lista<Pelicula>* peliculasRecomendas = new Lista<Pelicula>;
    Menu menuNuevo;
    menuNuevo.cargarDesdeArchivo(peliculasVistas);
    menuNuevo.cargarDesdeArchivo(peliculasNoVistas);

	while (!menuNuevo.obtenerSalir())
	{
		menuNuevo.mostrarMenu();
		menuNuevo.ejecutarOpcion(peliculasVistas,peliculasNoVistas,peliculasRecomendas);
	} 

    delete peliculasVistas;
    delete peliculasNoVistas;
    delete peliculasRecomendas;*/


    //aca empieza el testeo con strings en memoria dinamica, es lo mismo si estan en estaticas
    string *x1 = new string;
    string *x2 = new string;
    string *x3 = new string;
    string *x4 = new string;
    string *x5 = new string;

    *x1 = "Pedrito";
    *x2 = "Juancito";
    *x3 = "Menganito";
    *x4 = "juliosi";
    *x5 = "federico";

    //Primer testeo con objetos peliculas a la lista
    Lista<Pelicula> *peliculas = new Lista<Pelicula>();
    Pelicula *ej = new Pelicula("maso", "erpe", 3, "diegororeer");
    Pelicula *ej2 = new Pelicula("asd", "dffe", 5, "egg");
    peliculas->agregar(ej);
    peliculas->agregar(ej2);
    //Se agregaron correctamente las peliculas y son diferentes. - CORRECTO

    //Segundo testeo agregar a la lista de strings "actores" dentro de la clase pelicula
    ej->asignarActor(*x1);
    ej->asignarActor(*x2);
    ej->asignarActor(*x3);
    ej->asignarActor(*x4);
    ej->asignarActor(*x5);
    ej->mostrarPelicula();
    cout << endl;
    //todos los actores"strings" son iguales dentro de la lista, en la clase pelicula -FAIL

    //tercer ejemplo lista de strings
    Lista<string> *ej3 = new Lista<string>();
    ej3->agregar(x1);
    ej3->agregar(x2);
    ej3->agregar(x3);
    ej3->agregar(x4);
    ej3->agregar(x5);
    //todos los elemetnos iguales - FAIL
    
    return 0;
}