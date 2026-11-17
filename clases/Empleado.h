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
			this->setGenero(genero);
			this->setSalario(salario);
			this->setContrato(contrato);
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
		
		char getGenero(){
			return this->genero;
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("Genero solo admite M, F, X");
		}
		
		float getSalario(){
			return this->salario;
		}
		void setSalario(float salario){
			if(salario >= 0)
				this->salario = salario; //se acepta
			else
				throw invalid_argument("Salario solo permite numeros >= 0");
		}
		
		char getContrato(){
			return this->contrato;
		}
		void setContrato(char contrato){
			if( contrato == 'T' || contrato == 'P' )
				this->contrato = contrato;
			else
				throw invalid_argument("Contrato solo admite T, P");
		}
		
		//Metodos varios
		string getGeneroDescripcion(){
			if(this->genero == 'M') return "Masculino";
			if(this->genero == 'F') return "Femenino";
			if(this->genero == 'X') return "Otros";
			return "No configurado";
		}
		string getContratoDescripcion(){
			if(this->contrato == 'T') return "Temporal";
			if(this->contrato == 'P') return "Permanente";
			return "No configurado";
		}
		void imprimir(){
			cout << "------------------ Perfil de Empleado ------------------" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->getGeneroDescripcion() << endl;
			cout << "Salario: " << this->salario << endl;
			cout << "Tipo de Contrato: " << this->getContratoDescripcion() << endl;
		}
};

#endif
