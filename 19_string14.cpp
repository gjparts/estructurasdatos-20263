#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que calcule e imprima el promedio
	de 3 numeros double digitados por el usuario.
	Debe validar que los numeros digitados en realidad
	sean numeros, si es correcto entonces
	imprima el promedio de lo contrario
	imprima un mensaje indicando que alguno de
	los valores proporcionados no es un numero*/
	double a,b,c;
	string s1,s2,s3;
	
	cout << "a: ";
	getline(cin,s1);
	cout << "b: ";
	getline(cin,s2);
	cout << "c: ";
	getline(cin,s3);
	
	try{
		//intentar convertir los string leidos a numeros
		a = stod(s1);
		b = stod(s2);
		c = stod(s3);
		cout << "Promedio: " << (a+b+c)/3.0 << endl;
	}
	catch(exception ex){
		cout << "Solo se acepta numeros." << endl;
	}
	
	
	return 123;
}







