#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Haga un programa que pida al usuario digitar dos string,
	luego el programa imprimira un mensaje indicando si son
	iguales o si son diferentes; pero va a ignorar las
	mayusculas y minusculas. Sin alterar los string leidos.*/
	string x,y;
	cout << "Digite el string x: ";
	getline(cin,x);
	cout << "Digite el string y: ";
	getline(cin,y);

	//sacar copias de x,y en a,b
	string a = x, b = y;

	transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
	
	if( a == b )
		cout << "ambos string son iguales ignorando mayusc./minusc.";
	else
		cout << "ambos string NO son iguales";

	cout << endl;

	return 777;
}
