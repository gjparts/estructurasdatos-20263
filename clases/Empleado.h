//Clase Empleado
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		//propiedades privadas o protegidas
		int edad;
		char genero;
		float salario;
		char contrato;
	public:
		//propiedades publicas
		string nombre;
		
		//Constructor
		Empleado(string nombre, int edad, char genero, float salario, char contrato){
			this->nombre = nombre;
			this->setEdad(edad); //aplicar la regla desde el constructor
			this->genero = genero;
			this->salario = salario;
			this->contrato = contrato;
		}
		
		//Metodos
		//Getters y Setters (siempre son publicos)
		//Metodos get: permiten leen una propiedad privada desde fuera de la clase
		//Metodos set: permiten escribir una propiedad privada desde fuera de la clase
		int getEdad(){
			return this->edad;
		}
		//un metodo get debe ser del mismo tipo de dato de la propiedad relacionada
		//los metodos get normalmente no llevan parametros.
		
		void setEdad(int edad){
			//hay una regla, debemos evaluar una guard clause
			if(edad >= 18)
				this->edad = edad; //se acepta
			else
				throw invalid_argument("Edad solo admite numeros >= 18");
		}
		//un metodo set por lo general debe ser void porque no retornan, sino escriben
		//un metodo set siempre recibe al menos un parametro con el valor a escribir
		//dicho parametro debe ser del mismo tipo de dato de la propiedad.
};

#endif
