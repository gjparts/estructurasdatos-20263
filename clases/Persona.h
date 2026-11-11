//Clase Persona
#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
	public:
		string nombre;
		int edad;
		char genero;
		
		/*Constructor
		es un metodo que existe dentro de una clase y usa para asignar
		una direccion de memoria a un objeto derivado de la clase.
		-> En C++ el constructor se debe llamar igual que la clase
		-> No lleva tipo de dato porque este retorna direccion de memoria
		-> Siempre va en el ambito publico
		-> En C++ una clase puede tener varios constructores; pero con
		   diferente firma
		-> Normalmente se usan para inicializar los valores de las propiedades
		   de un objeto; pero tambien se pueden usar para disparar otras acciones
		*/
		//Constructor sin parametros
		Persona(){
			//se recomienda el this-> para indicar que se esta escribiendo la propiedad
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
		}
		//Constructor con todos los parametros (llena todas las propiedades)
		Persona(string nombre, int edad, char genero){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
		}
		//Constructor con dos parametros
		Persona(string nombre, int edad){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X';
		}
		
		//Metodos: un metodo es una funcion que esta dentro de una clase
		void imprimir(){
			cout << "************ Persona ************" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->generoDescripcion() << endl;
			cout << "Es de la tercera edad? " << ( this->esTerceraEdad() ? "Si" : "No" ) << endl;
		}
		//metodo que imprime un saludo en ingles o en español
		void saludar(bool ingles){
			if(ingles)
				cout << "Hello";
			else
				cout << "Hola";
			cout << endl;
		}
		//metodo que devuelve true o false si la edad es mayor o igual que 60
		bool esTerceraEdad(){
			return (this->edad >= 60);
		}
		//metodo que devuelva el genero; pero como un string describiendolo
		//M = Masculino, F = Femenino, x = Otros
		string generoDescripcion(){
			if(this->genero == 'M') return "Masculino";
			if(this->genero == 'F') return "Femenino";
			if(this->genero == 'X') return "Otros";
			//en caso que no sea ninguna de las anteriores:
			return "No configurado";
		}
};

#endif




