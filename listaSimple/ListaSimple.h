//Clase ListaSimple
#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		//Propiedades (Nodos first y last apuntan a objetos Nodo)
		Nodo *first;
		Nodo *last;
		int length;
	public:
		//Constructor
		ListaSimple(){
			//al construir la lista no tiene nodos
			this->first = NULL;
			this->last = NULL;
			this->length = 0;
		}
};

#endif
