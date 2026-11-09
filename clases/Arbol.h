//Clase Arbol
/*#ifndef: significa if not defined
  se usa para evitar la creacion de dos regiones
  de codigo que tengan el mismo identificador
  siempre se cierra con un #endif
  
  #define: le pone nombre a una region de codigo, va despues
  de #ifndef.
  
  Estas etiquetas de apoyo al compilador lo que hacen es que evitan
  errores si alguien por equivocacion hace include dos veces
  a un mismo archivo h*/
#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>
using namespace std;

//nombres de clases se recomienda usar Pascal Case
//nombre de propiedades y metodos se recomienda usar camel Case
class Arbol{
	private:
		//ambito privado: propiedades y metodos que no son
		//accesibles desde fuera de la clase (private scope)
	public:
		//ambito publico: propiedades y metodos que
		//se pueden acceder desde fuera de la clase (public scope)
		//Propiedades
		float alto;
		float ancho;
		string especie;
		//Con respecto a los constructores, si no coloca ningun
		//constructor; entonces C++ crea uno sin parametros
};

#endif












