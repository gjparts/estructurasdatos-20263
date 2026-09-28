#include<iostream>
using namespace std;

int main(){
	/*Haga un programa que capture un string. Luego debera imprimirlo;
	pero dejado tres asteriscos entre cada caracer.
	Sin afectar a la variable string original.
	Ejemplo:
	Digite un string: Melon
	Resultado: M***e***l***o***n****/
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	
	//recorrer cada caracter del string e ir imprimiendo *** despues de cada uno
	for(int i = 0; i < str.length(); i++){
		cout << str[i] << "***";
	}
	cout << endl;
	
	//para que vean que el string original no fue afectado lo imprimimos:
	cout << "valor de str: " << str << endl;
	
	return 123;
}
