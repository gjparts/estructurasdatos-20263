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
	
	
	
	return 123;
}














