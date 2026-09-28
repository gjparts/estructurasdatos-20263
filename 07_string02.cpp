#include<iostream>
using namespace std;

int main(){
	//leer datos de la consola hacia una variable string
	string s1;
	
	/*cout << "Digite su nombre completo: ";
	cin >> s1;
	cout << "Usted se llama " << s1 << endl;*/
	
	//lo anterior no se recomienda para capturar string, esto en vista
	//que cin al detectar un espacio en blanco almacena el texto anterior
	//en la variable y descarta el texto siguiente a ese espacio.
	
	//si Usted nota, cuando en cin hay mas de una variable, la captura se
	//se hace utilizando los espacios en blanco como separadores de la informacion
	//que va a cada variable, por lo que cin no reconoce al espacio como parte
	//de un string.
	/*int a,b,c;
	cout << "Digite tres enteros separados por un espacio en blanco: ";
	cin >> a >> b >> c;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;*/
	
	//Solucion: utilizar la funcion getline
	string nombre;
	cout << "Digite su nombre completo: ";
	getline(cin,nombre);
	//donde cin es el origen desde donde vamos a leer, en este caso la terminal
	//y nombre es el destino, a donde guardaremos lo leido en el origen.
	cout << "Usted se llama " << nombre << endl;
	
	return 431;
}





