#include<iostream>
using namespace std;

int main(){
	/*Bug que ocurre cuando se viene de leer un valor primitivo
	usando cin, y luego se quiere leer un string usando getline
	en la termina de Windows*/
	
	int x;
	string str;
	
	cout << "Digite un entero: ";
	cin >> x;
	
	//cuando viene de leer un valor primitivo usando cin
	//y luego desea leer un string usando getline debera
	//ejecutar esta funcion antes de getline para vaciar el buffer de entrada:
	cin.ignore();
	
	cout << "Digite un string: ";
	getline(cin,str);
	
	cout << "el valor de x es " << x << endl;
	cout << "el valor de str es " << str << endl;
	
	return 111;
}
