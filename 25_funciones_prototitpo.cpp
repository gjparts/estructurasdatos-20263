/*Funcion o Macro
	Es una sub-rutina o sub-programa que se puede reutilizar.
	-> Algunas funciones estan diseñadas para retornar un valor, objeto o estructura
	   a estas se les conoce como funciones con retorno.
	-> Otras funciones se diseñan para unicamente realizar un trabajo y no retornan
	   ningun valor, a estas se les conoce como funciones vacias o funciones void.
	   
	En C++ existen varias formas de declarar las funciones, tres de 
	las mas populares son:
	1) Por medio de prototipado de funciones
	2) Sin prototipado de funciones
	3) A traves de un archivo externo sin prototipado
	
	Prototipado de funciones
	------------------------
	Consiste en la declaracion de las firmas de sus funciones antes del main()
	Y en la implementacion de las funciones despues del main()
	Este mecanismo fue muy popular en los años 90 y principios de los 2000
	   */
	   
#include<iostream>
using namespace std;

//Prototipos de funciones (aqui solo van las firmas o signatures)
int sumar(int a, int b); //se le coloca un punto y coma nada mas
int sumar(int a, int b, int c);
//cuando hay dos funciones con el mismo nombre pero diferente firma
//se llama sobrecarga de funciones (function overload)
void saludar();

int main(){
	cout << sumar(2,3) << endl;
	saludar();
	int z = sumar(7,8);
	cout << "el valor de z es " << z << endl;
	cout << sumar(7,9,14) << endl;
	
	return 777;
}

//Implementacion de funciones
int sumar(int a, int b){
	return a+b;
}

int sumar(int a, int b, int c){
	return a+b+c;
}

void saludar(){
	cout << "Hola UNAH" << endl;
}




