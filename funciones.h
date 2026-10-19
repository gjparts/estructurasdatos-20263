/*Archivos de funciones externas
La ventaja de tener nuestras funciones en archivos aparte
es que el codigo en main() se mas ordenado.
Trabajar nuestras funciones en archivos externos es una buena
practica de programacion, a esto se le conoce como programacion modular.*/

//siempre va la importacion de librerias en el archivo de funciones:
#include<iostream>
using namespace std;

//Declaracion e Implementacion de funciones
int sumar(int a, int b){
	return a+b;
}

int sumar(int a, int b, int c){
	return a+b+c;
}

void saludar(){
	cout << "Hola UNAH" << endl;
}
