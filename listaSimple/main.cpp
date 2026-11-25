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
	
	//prueba del metodo print
	lista.print();
	
	//prueba del metodo get
	try{
		cout << "Valor del Nodo en la posicion 2: " << lista.get(2)->value << endl;
		cout << "Valor del Nodo en la posicion 0: " << lista.get(0)->value << endl;
		cout << "Valor del Nodo en la posicion 5: " << lista.get(5)->value << endl;
		//cout << "Valor del Nodo en la posicion 200: " << lista.get(200)->value << endl;
		cout << "Valor del Nodo en la posicion -9: " << lista.get(-9)->value << endl;
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	//prueba del metodo set
	try{
		lista.set(4,"Guanabana");
		lista.set(1,"Melocoton");
		lista.print();
		lista.set(-900,"Noni");
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	return 777;
}
