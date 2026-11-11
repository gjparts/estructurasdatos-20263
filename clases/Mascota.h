//Clase Mascota
#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;

class Mascota{
	private:
	public:
		//Propiedades
		string nombre;
		string especie;
		char genero;
		int edad;
		bool pedigree;
		
		//Constructores
		Mascota(){
			this->nombre = "No definido";
			this->especie = "No definida";
			this->genero = 'X';
			this->edad = 0;
			this->pedigree = false;
		}
		Mascota(string nombre, string especie, char genero, int edad, bool pedigree){
			this->nombre = nombre;
			this->especie = especie;
			this->genero = genero;
			this->edad = edad;
			this->pedigree = pedigree;
		}
		
		//Metodos
		void Imprimir(){
			cout << "********** Ficha de la Mascota **********" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Especie: " << this->especie << endl;
			cout << "Tiene Pedigree: " << ( this->pedigree ? "Si" : "No" ) << endl;
		}
};

#endif
