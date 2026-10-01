#include<iostream>
using namespace std;

int main(){
	//Arreglo de string
	//arreglo prellenado:
	string frutas[] = {"fresa","manzana","sandia","pera","melon"};
	//arreglo sin inicializar
	string paises[4];
	
	//imprimir cada arreglo
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	cout << "------------------------------------------" << endl;
	for( int i = 0; i < end(paises)-begin(paises); i++ ){
		cout << paises[i] << endl;
	}
	
	/*Un arreglo de string en C++ es un arreglo unidimensional, lo que sucede
	que como cada string se puede manipular similar a un arreglo pues da la
	ilusion de ser un arreglo bidimensional; pero en realidad no lo es.*/
	
	cout << "La fruta con indice 2 es: " << frutas[2] << endl;
	cout << "El tercer caracter de la fruta 3 es: " << frutas[3][2] << endl;
	//en el anterior frutas[3] es el string y el [2] indica el numero de char del string
	
	//como cada item en frutas es un string tambien tiene acceso a las funciones de cada uno
	cout << "Longitud de la fruta 1 es " << frutas[1].length() << endl;
	cout << "Longitud de la fruta 4 es " << frutas[4].length() << endl;
	
	//reemplazo de elementos:
	//cambiar la sandia por melocoton
	frutas[2] = "melocoton";
	cout << "-----------------------------" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	//reemplazo de caracteres dentro de alguno de los string del arreglo
	//cambiar por una X el tercer caracter de la fruta 4
	frutas[4][2] = 'X';
	cout << "-----------------------------" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	//concatenar un char al final de alguno de los string del arreglo
	//agregar una Z al final de la fruta 1
	frutas[1] += 'Z';
	cout << "-----------------------------" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	//agregar un string al final de otro string del arreglo
	//agregar la palabra verde al final de melocoton
	frutas[2] += " verde";
	cout << "-----------------------------" << endl;
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		cout << frutas[i] << endl;
	}
	
	return 567;
}









