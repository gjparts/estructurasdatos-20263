/*Funciones sin Prototipado
---------------------------
Consiste en declarar e implementar las funciones antes de main().
-> El problema con esta forma es que el main() practicamente queda
   al final de todo el codigo.*/
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

int main(){
	cout << sumar(2,3) << endl;
	saludar();
	int z = sumar(7,8);
	cout << "el valor de z es " << z << endl;
	cout << sumar(7,9,14) << endl;
	
	return 777;
}

