//Clase Estudiante
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Estudiante{
	private:
		string nombre;
		string cuenta;
		string dni;
		char genero;
		int edad;
		float promedio;
		string carrera;
	public:	
		//Constructor
		Estudiante(string nombre,string cuenta,string dni,char genero,
			int edad,float promedio,string carrera){
			this->setNombre(nombre); //aplicar las reglas
			this->setCuenta(cuenta);
			this->setDni(dni);
			this->setGenero(genero);
			this->setEdad(edad);
			this->setPromedio(promedio);
			this->setCarrera(carrera);
		}
		//Metodos get y set
		string getNombre(){
			return this->nombre;
		}
		void setNombre(string nombre){
			if(nombre.length() >= 5)
				this->nombre = nombre;
			else
				throw invalid_argument("Nombre debe ser de al menos 5 caracteres");
		}
		string getCuenta(){
			return this->cuenta;
		}
		void setCuenta(string cuenta){
			if(cuenta.length() == 11)
				this->cuenta = cuenta;
			else
				throw invalid_argument("Cuenta debe ser de 11 caracteres");
		}
		string getDni(){
			return this->dni;
		}
		void setDni(string dni){
			if(dni.length() == 13)
				this->dni = dni;
			else
				throw invalid_argument("DNI debe ser de 13 caracteres");
		}
		char getGenero(){
			return this->genero;
		}
		void setGenero(char genero){
			if(genero == 'M' || genero == 'F' || genero == 'X')
				this->genero = genero;
			else
				throw invalid_argument("Genero debe ser: M F X");
		}
		int getEdad(){
			return this->edad;
		}
		void setEdad(int edad){
			if(edad >= 12)
				this->edad = edad;
			else
				throw invalid_argument("Edad debe ser >= 12");
		}
		float getPromedio(){
			return this->promedio;
		}
		void setPromedio(float promedio){
			if(promedio >= 0 && promedio <= 100)
				this->promedio = promedio;
			else
				throw invalid_argument("Promedio es un entero entre 0 y 100");
		}
		string getCarrera(){
			return this->carrera;
		}
		void setCarrera(string carrera){
			if(carrera.length() >= 10)
				this->carrera = carrera;
			else
				throw invalid_argument("Carrera debe ser de al menos 10 caracteres");
		}
		//Metodos varios
		void imprimir(){
			cout << "------------ Ficha de Estudiante ------------" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Cuenta: " << this->cuenta << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "DNI: " << this->dni << endl;
			cout << "Promedio: " << this->promedio << endl;
			cout << "Carrera: " << this->carrera << endl;
		}
};

#endif
