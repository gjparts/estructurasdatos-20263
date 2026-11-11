#include<iostream>
#include "Arbol.h"
#include "Persona.h"
#include "Mascota.h"
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
	Arbol a2; //cuando el objeto va en el Stack no se ejecuta el new para construirlo
	//escribir las propiedades de a2
	a2.alto = 7.56;
	a2.ancho = 1.82;
	a2.especie = "Caoba";
	
	//leer las propiedades de a2
	cout << "a2 ------------------" << endl;
	cout << "ancho: " << a2.ancho << endl;
	cout << "alto: " << a2.alto << endl;
	cout << "especie: " << a2.especie << endl;
	//Observe que al trabajar en el Stack no se usan las flechas para
	//acceder a las propiedades, sino se usa punto.
	//Otra cosa es que el constructor no se ejecuta con new.
	
	Persona per1;
	per1.nombre = "Gerardo Portillo";
	per1.edad = 44;
	per1.genero = 'M';
	
	cout << "per1 ------------------" << endl;
	cout << "nombre: " << per1.nombre << endl;
	cout << "edad: " << per1.edad << endl;
	cout << "genero: " << per1.genero << endl;
	
	Persona per2;
	cout << "per2 ------------------" << endl;
	cout << "nombre: " << per2.nombre << endl;
	cout << "edad: " << per2.edad << endl;
	cout << "genero: " << per2.genero << endl;
	//Note que per2 lo hicimos usando el constructor sin parametros
	//por lo tanto nombre, edad y genero presentaran los valores con que fue
	//inicializado.
	
	//aqui vamos a crear a per3, usando el constructor con todos los parametros:
	Persona per3("Filomeno Colinas",82,'M');
	per3.imprimir();
	
	//he creado per4 usando el constructor con dos parametros
	Persona per4("Irene",44);
	per4.imprimir();
	per4.saludar(true);
	per4.saludar(false);
	
	Mascota m1;
	m1.Imprimir();
	
	//recuerden que al objeto se le puede asignar valores
	//aunque lo haya construido sin parametros:
	m1.nombre = "Palmerolo";
	m1.especie = "Burro";
	m1.genero = 'M';
	m1.edad = 4;
	m1.Imprimir();
	
	Mascota m2("Tinieblo", "Gato", 'M', 2, false);
	m2.Imprimir();
	
	Mascota m3("Rosita","Lora",'H',1,false);
	m3.Imprimir();
	
	Mascota m4("Killer","Perro",'M',3,true);
	m4.Imprimir();
	
	return 123;
}









