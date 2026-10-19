/*Funciones sin prototipo en un archivo externo
-----------------------------------------------
Consiste en colocar las funciones dentro de uno o varios archivos
externos, estos archivos se nombran con extension .h que significa header
El archivo de funciones normalmente se coloca en el mismo folder
del programa.
-> Mientras que la funcion main() esta en el archivo .cpp todas
   las demas funciones estan en archivos .h
*/

#include<iostream>
#include "funciones.h" //cuando la libreria es hecha
					   //por nosotros se usa comillas dobles
using namespace std;

int main(){
	cout << sumar(2,3) << endl;
	saludar();
	int z = sumar(7,8);
	cout << "el valor de z es " << z << endl;
	cout << sumar(7,9,14) << endl;
	
	return 123;
}
