#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que lea un string llamado s1,
	luego declare otro string llamado s2.
	El programa debera copiar el contenido de s1 dentro de s2;
	pero colocando tres asteriscos entre cada caracter en s2.
	Luego imprimen el contenido de s1 y de s2.
	Ejemplo:
	Digite s1: pera
	s1: pera
	s2: p***e***r***a***
	*/
	string s1, s2 = ""; //s2 se recomienda inicializarlo asi para evitar basura previa
	cout << "Digite s1: ";
	getline(cin,s1);
	
	//recorrer cada char en s1, copiarlo a s2 y concatenarle los asteriscos
	for(int i = 0; i < s1.length(); i++){
		s2 += s1[i];
		s2 += "***";
	}
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	
	return 456;
}
