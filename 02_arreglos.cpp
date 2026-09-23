#include<iostream>

using namespace std;

int main(){
	/*Arreglo o Array
	Es una estructura de datos estatica, homogenea y secuencial que
	permite agrupar un conjunto de valores.
	a) es Estatico: porque no puede cambiar su tamanio y existe
				   en una posicion fija en la memoria
	b) es Secuencial: porque todos sus elementos se guardan de forma
	                consecutiva en la memoria (uno despues del otro)
	c) es Homogeneo: porque todos sus elementos son del mismo tipo
	                 para optimizar la reservacion de memoria
	*/
	
	/*La scuencialidad de un arreglo es lo que lo hace optimo ya
	que facilita poder ubicar cada uno de sus elementos; pero al mismo
	tiempo hacer que el arreglo no sea la mejor opcion para grandes
	volumenes de informacion.
	Esto se debe a que cuando se ejecuta el programa y se necesita
	reservar memoria para un arreglo; entonces el sistema operativo
	va a buscar un espacio en la memoria que no tenga ningun estorbo
	dentro de la cantidad de bytes para el arreglo deseado.*/
	//int a[5000000];
	//el codigo anterior posiblemente haga crash porque intentara
	//ubicar 5 millones de enteros (20 millones de bytes) en la memoria
	//esperando que no halla obstaculos entre ellos.
	
	//existen dos formas de declarar arreglos en c++
	//1) crear el arreglo sin inicializar
	//2) crear el arreglo prellenado e inicializado
	
	//1) Arreglo sin inicializar
	int arreglo1[12];
	//imprimamos el contenido de arreglo1
	for(int i = 0; i < 12; i++){
		cout << arreglo1[i] << endl;
	}
	//IMPORTANTE: En C++ cuando declara un arreglo sin inicializar, este
	//puede llegar a contener valores remanentes (basura) dejados por
	//otros programas que no vaciaron correctemente la memoria.
	
	//un arreglo sin inicializar que normalmente viene con datos basura
	//podemos inicializarlo con valores CERO nosotros mismos:
	for(int i = 0; i < 12; i++){
		arreglo1[i] = 0;
	}
	cout << "---------------------------------------" << endl;
	
	//imprimir de nuevo el contenido de arreglo1
	for(int i = 0; i < 12; i++){
		cout << arreglo1[i] << endl;
	}
	
	//2) Declarar un arreglo prellenado con datos
	int arreglo2[] = { 9, 100, -7, 123, 50, 777, -8, 3 };
	cout << "---------------------------------------" << endl;
	
	//imprimir el contenido de arreglo2
	for(int i = 0; i < 8; i++){
		cout << arreglo2[i] << endl;
	}
	
	//un arreglo en C++ es una coleccion de apuntadores de memoria
	//si Usted imprime el arreglo sin indicar el numero de indice
	//entonces se le mostrara la direccion de memoria de la posicion
	//del primer elemento del arreglo
	cout << "direccion de memoria de arreglo1: " << arreglo1 << endl;
	cout << "direccion de memoria de arreglo2: " << arreglo2 << endl;
	
	//si desea saber donde comienza y donde termina cualquier variable
	//incluso un arreglo utilice las funciones begin y end
	cout << "arreglo1 comienza en: " << begin(arreglo1) << endl;
	cout << "arreglo1 termina en: " << end(arreglo1) << endl;
	//para poder usar begin y end recuerde configurar su compilador
	//de C++ para la version 11 de la libreria estandar.
	
	//saber cuantos elementos tiene un arreglo
	cout << "Longitud de arreglo1: " << end(arreglo1)-begin(arreglo1) << endl;
	cout << "Longitud de arreglo2: " << end(arreglo2)-begin(arreglo2) << endl;
	
	//imprimir el contenido del qrreglo2
	for(int i = 0; i < end(arreglo2)-begin(arreglo2); i++){
		cout << arreglo2[i] << endl;
	}
	
	//la resta de end-begin se puede almacenar en una variable int
	int x = end(arreglo2)-begin(arreglo2);
	cout << "Longitud de arreglo2: " << x << endl;
	
	return 123;
}














