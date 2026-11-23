//Clase Nodo
#ifndef NODO_H
#define NODO_H

#include<iostream>
using namespace std;

class Nodo{
	private:
	public:
		//Propiedades
		string value;
		Nodo *next;
		//Constructor
		Nodo(string value){
			this->value = value;
			this->next = NULL;
		}
};

#endif
