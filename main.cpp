#include <iostream>
#include "persona.h"
using namespace std;

//Prototipos hffjgfnf
void mostrarMenu(void);
int leerOpcion(void);
void ejecutarOpcion(Persona [],int, int);
//mas prototipos
int main()
{
	Persona amigos[100];   //array que almacena la lista de amigos
	int opcion;           //variable que recibe la opcion elegida por el usuario
	
	//inicializamos el array de amigos con todas sus posiciones libres
	for(int ind=0; ind < 100; ind++)
	{
		amigos[ind].nombre[0]='\0';
	}
	
	//El programa ejecuta un bucle en el que realizara la siguientes procesos
  do
	{
		//mostrara un menu de opciones por pantalla
		mostrarMenu();
		
		//leer una opcion del menu
		opcion=leerOpcion();
		
		
	//ejecutar la opcion elegida
		ejecutarOpcion(amigos,100,opcion);
		
	}while(opcion!=10);    //mientrar que la opcion elegida sea distinta de terminar 
	

	
	return 0;
}
