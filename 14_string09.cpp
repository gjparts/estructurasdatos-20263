#include<iostream>
using namespace std;

int main(){
	//Funcion find
	//permite buscar un string dentro de otro string.
	//esta funcion devuelve la posicion de la primera coincidencia
	//encontrada a partir de donde se inicio la busqueda.
	//su equivalente en JAVA y C# es el metodo IndexOf
	string texto = "El carro es rojo, el carro es veloz, que buen carro!";
	cout << texto << endl;
	
	string buscar;
	cout << "Digite lo que desea buscar en el texto anterior: ";
	getline(cin,buscar);
	
	int posicion = texto.find(buscar,0);
	/*
	-> el CERO indica desde que posicion vamos a comenzar a buscar, en este
	caso estamos diciendo que desde el primer caracter.
	-> find() retorna un numero entero que indica la posicion de
	la primera coincidencia encontrada.
	-> Si find() retorna -1 quiere decir que no encontro lo que buscaba
	-> find() no ignora mayusculas y minusculas.
	*/
	if( posicion == -1 )
		cout << "No encontrado" << endl;
	else
		cout << "Encontrado en la posicion " << posicion << endl;
	
	return 123;
}
