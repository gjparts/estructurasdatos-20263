#include<iostream>
using namespace std;

int main(){
	/*Caza de errores (try-catch)
	Este bloque permite decidir que se hara en caso
	de que ocurra una excepcion controlable (de tipo throw)
	ejemplo:
	Haga un programa que lea un string y lo convierta a entero
	en caso de fallar debera mostrar un mensaje.
	En caso de exito imprima el numero entero obtenido en la conversion
	*/
	try{
		//codigo que puede llegar a fallar
		string str;
		cout << "Digite un string para convertirlo a entero: ";
		getline(cin,str);
		cout << "La conversion a entero es: " << stoi(str) << endl;
	}catch(exception ex){
		//lo que va a pasar en caso de suceder throw
		cout << "Solo se admite numeros enteros" << endl;
	}
	
	return 777;
}
