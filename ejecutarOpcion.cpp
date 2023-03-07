#include <iostream>
#include "persona.h"
using namespace std;

//Prototipos de funcion
void aniadirAmigo(Persona [], int);

//Funcion que recibe un array de elementos de tipo Persona y un valor entero
//La funcion ejecuta la opcion recibida como parametro y no devuelve nada
void ejecutarOpcion(Persona array[],int tam, int opc)
{
	switch(opc)
	{
		case 1: cout<<"Se ha elegido la opcion 1\n\n";break;
		case 2: cout<<"Se ha elegido la opcion 2\n\n";break;
		case 3: cout<<"Se ha elegido la opcion 3\n\n";break;
		case 4: cout<<"Se ha elegido la opcion 4\n\n";break;
		case 5: cout<<"Se ha elegido la opcion 5\n\n";break;
		case 6: cout<<"Se ha elegido la opcion 6\n\n";break;
		case 7: cout<<"Se ha elegido la opcion 7\n\n";break;
		case 8: cout<<"Se ha elegido la opcion 8\n\n";break;
		case 9: aniadirAmigo(array,tam);break;
		case 10: cout<<"Hasta la vista\n\n\n";break;
	}
}
