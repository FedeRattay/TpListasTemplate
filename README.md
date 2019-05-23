# TpListasTemplate

La aplicación debe leer estos archivos y generar dos listas:
 - Películas_vistas
 - Películas_no_vistas.

Luego ofrecerá un menú para mostrarlas y generar y mostrar una Tercera Lista:

    películas_recomendadas

Esta lista se generará de la siguiente forma:
 - Con cada película vista se tomará: el género, el director, y los actores.
 - Comparando con las no vistas, si:
 	 - Hay coincidencia en el género(en el director o por lo menos uno de los actores).
 	 - El puntaje es 7 o más.
 - Se toma la película como recomendada.

Consideraciones:
 - Las listas son dinámicas.
 - Las listas utilizan templates.
 - Los archivos están bien formados.
 - La cantidad de actores que intervienen en una película es variable.

Templates:

	Listas:	
 		 - Puntero a Peliculas(Vistas & No vistas).
 		 - Puntero a Personas(Actores & Directores).

El archivo sera de la forma:

    Nombre_pelicula
    Género
    Puntaje
    Director
    actor_1		actor_2		actor/actriz_n
