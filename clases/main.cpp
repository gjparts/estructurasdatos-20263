#include<iostream>
#include "Arbol.h"
using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Arbol
	//existen dos formas:
	//1) al HEAP (no se recomienda a menos que ocupe millones de datos)
	//2) al STACK (recomendado para la mayoria de casos)
	
	//instanciar un objeto usando el HEAP
	Arbol *a1 = new Arbol();
	//asignar valores a las propiedades de a1
	a1->alto = 5.25;
	a1->ancho = 1.2;
	a1->especie = "Ceiba Pentandra";
	
	//leer valores de a1
	cout << "a1 ------------------" << endl;
	cout << "ancho: " << a1->ancho << endl;
	cout << "alto: " << a1->alto << endl;
	cout << "especie: " << a1->especie << endl;
	
	//instanciar un objeto usando el STACK
	
	return 123;
}
