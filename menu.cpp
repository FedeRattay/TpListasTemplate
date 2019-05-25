#include <iostream>
#include "menu.hpp"
#include <string>
#include <fstream>

using namespace std;

void Menu::mostrarMenu()
{
    int opcionMenu = 0;
    bool opcionIncorrecta = true;
    while (opcionIncorrecta)
    {
        cout<<"---------------------------------------"<<endl;
        cout << "MENU PRINCIPAL" << endl;
        cout<<"Elija una opcion: "<<endl;
        cout<<"1) Mostrar peliculas vistas"<<endl;
        cout<<"2) Mostrar peliculas no vistas"<<endl;
        cout<<"3) Mostrar peliculas recomendadas"<<endl;
        cout<<"4) Salir"<<endl;
        cout<<"---------------------------------------"<<endl;
        cin>>opcionMenu;
        if (opcionMenu > 0 && opcionMenu <= 4)
        {
            ingresarOpcion(opcionMenu);
            opcionIncorrecta = false;
        }
        else
        {
            cout<<"Opcion incorrecta"<<endl;
        } 
    }
}

void Menu::ejecutarOpcion(Lista<Pelicula>* peliculasVistas,Lista<Pelicula>* peliculasNoVistas,Lista<Pelicula>* peliculasRecomendadas)
{
    switch (obtenerOpcion())
    {
    case 1:{

            string nombre = peliculasVistas->consultar(0)->obtenerActor(0);
            mostrarPeliculas(peliculasVistas);
        break;
    }
    case 2:
            mostrarPeliculas(peliculasNoVistas);
        break;
    case 3:
            peliculasRecomendadas = crearPeliculasRecomendadas(peliculasVistas,peliculasNoVistas);
            mostrarPeliculas(peliculasRecomendadas);
        break;
    case 4:
            salir = true;
    }
}

void Menu::mostrarPeliculas(Lista<Pelicula>* peliculas)
{
    for(int i = 0; i < peliculas->obtenerTamanio(); i++)
    {
        peliculas->consultar(i)->mostrarPelicula();
    }
}

Lista<Pelicula>* Menu::crearPeliculasRecomendadas(Lista<Pelicula>* peliculasVistas,Lista<Pelicula>* peliculasNoVistas)
{
    Lista<Pelicula>* peliculasRecomendadas = new Lista<Pelicula>;
    for(int i  = 0;i<peliculasVistas->obtenerTamanio();i++)
    {
        string generoVisto = peliculasVistas->consultar(i)->obtenerGenero();
        string directorVisto = peliculasVistas->consultar(i)->obtenerDirector();
        for (int j = 0; j< peliculasNoVistas->obtenerTamanio(); i++)
        {   
            string generoNoVisto = peliculasNoVistas->consultar(j)->obtenerGenero();
            string directorNoVisto = peliculasNoVistas->consultar(j)->obtenerDirector();
            if(generoVisto == generoNoVisto || directorVisto == directorNoVisto)
            {
                peliculasRecomendadas->agregar(peliculasNoVistas->consultar(j));
            }
        }
    }
    return peliculasRecomendadas;
}

void Menu::cargarDesdeArchivo(Lista<Pelicula>* peliculas)
{
    string nombreArchivo;
	cout << "Inserte Nombre Archivo: ";
	cin >> nombreArchivo;

	ifstream listaPeliculas(nombreArchivo);
	if (!listaPeliculas.is_open())
	{
		cout << "ERROR Archivo inexistente" << endl;
	}
	else
	{
		string newNombre;
		string newGenero;
		string newDirector;
		string newActor;
		string newPuntajeStr;
		int newPuntaje;
		bool finP = false;
		bool finA = false;
		
		while(getline(listaPeliculas, newNombre,'\n')&&(!finP))
		{
			if(newNombre != "")
			{
				getline(listaPeliculas, newGenero,'\n');
				getline(listaPeliculas, newPuntajeStr,'\n');
				getline(listaPeliculas, newDirector,'\n');
				
				newPuntaje = stoi(newPuntajeStr);
				Pelicula* peliculaNueva = new Pelicula(newNombre,newGenero,newPuntaje,newDirector);
				
				while((getline(listaPeliculas, newActor, '\t'))&&(!finA))
				{
					if(newActor != "\n")
						peliculaNueva->asignarActor(newActor);
					else
						finA = true;
				}
				finA = false;
				peliculas->agregar(peliculaNueva);
			}
			else
				finP = true;
		}
	}
}

bool Menu::obtenerSalir()
{
    return salir;
}

void Menu::ingresarOpcion(int opcion)
{
    this->opcion = opcion;
}

int Menu::obtenerOpcion()
{
    return opcion;
}