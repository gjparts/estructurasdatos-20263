#include<iostream>
#include "Nodo.h"
#include "ListaSimple.h"
using namespace std;

int main(){
	//crear una nueva Lista Simple (stack)
	ListaSimple lista;
	//agregar Nodos:
	lista.push("Sandia");
	lista.push("Naranja");
	lista.push("Pera");
	lista.push("Melon");
	lista.push("Kiwi");
	lista.push("Banano");
	
	//imprimir algunas caracteristicas de la lista
	cout << "lontitud de la lista: " << lista.getLength() << endl;
	cout << "Valor del primer nodo: " << lista.getFirst()->value << endl;
	cout << "Valor del ultimo nodo: " << lista.getLast()->value << endl;
	return 777;
}
