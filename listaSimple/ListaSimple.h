//Clase ListaSimple
#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include<stdexcept>
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
			//1) crear un nuevo Nodo con el valor enviado
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
		//Metodo para imprimir el contenido de la lista en la terminal
		void print(){
			//Algoritmo de recorrido
			//1) Declarar una variable temporal de clase Nodo y apuntarla a first
			Nodo *tmp = this->first;
			//2) Mientras tmp sea distinto de NULL entonces vamos a:
			//	a) Imprimir en value de tmp
			//	b) Luego apuntar tmp hacia el next del tmp actual (pasar al siguente Nodo)
			while(tmp != NULL){
				cout << "[" << tmp->value << "]->";
				tmp = tmp->next; //pasar al siguiente nodo
			}
			//el recorrido ha terminado:
			cout << "NULL" << endl; //imprimir el letrero para NULL
		}
		//Metodo para recuperar un Nodo en determinada posicion
		Nodo *get(int posicion){
			//guard clauses: la posicion no puede ser un numero negativo
			//y tampoco puede ser un numero para una posicion inexistente
			if(posicion < 0) throw invalid_argument("posicion a obtener no debe ser negativa");
			if(posicion >= this->length) throw invalid_argument("posicion fuera de los limites");
			
			//si llego aqui entonces, usamos el algoritmo de recorrido para llegar
			//a la posicion solicitada
			Nodo *tmp = this->first; //comenzar en el primer Nodo
			int posicionActual = 0; //contador de saltos
			
			while(tmp != NULL){
				if(posicionActual == posicion)
					return tmp; //si saltamos hasta la posicion deseada pues retornamos ese Nodo
				
				tmp = tmp->next; //pasar al siguiente nodo
				posicionActual++; //suma 1 al contador de saltos
			}
		}
		//Metodo para cambiar el valor de un Nodo que esta en determinada posicion
		void set(int pos, string value){
			//para no escribir otra vez todo el algoritmo de recorrido para localizar
			//el Nodo en determinada posicion, lo mas practico en este caso es
			//obtener el Nodo por medio del metodo get y luego al Nodo recuperado
			//se le cambia el valor
			this->get(pos)->value = value;
		}
};

#endif
