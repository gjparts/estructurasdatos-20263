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
		//Metodos get
		int getLength(){
			return this->length;
		}
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
		//Metodos set
		//Metodo para agregar un nuevo Nodo al final de la lista
		void push(string value){
			//1) crear un nuevo Nodo con el valor enviado (crear en stack)
			Nodo *nuevo = new Nodo(value);
			/*2) si length es 0 entonces:
				* first y last apuntan a nuevo
				si length es mayor que 0 entonces:
				a) el next del Nodo al que apunta last ahora apunta a nuevo
				b) el Nodo last apuntara a nuevo
			*/
			if(this->length == 0){
				this->first = nuevo;
				this->last = nuevo;
			}
			else{
				this->last->next = nuevo;
				this->last = nuevo;
			}
			//3) sumar 1 a length
			this->length++;
		}
};

#endif
