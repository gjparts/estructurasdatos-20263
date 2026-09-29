#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//Comparacion de string en C++
	//se utiliza el operador ==
	//Importante: el operador == no ignora mayusculas/minusculas
	string x,y;
	cout << "Digite el string x: ";
	getline(cin,x);
	cout << "Digite el string y: ";
	getline(cin,y);
	
	if( x == y )
		cout << "ambos string son iguales";
	else
		cout << "ambos string NO son iguales";

	cout << endl;

	return 777;
}
