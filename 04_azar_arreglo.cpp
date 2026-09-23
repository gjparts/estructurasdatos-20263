#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	/*Haga un programa en el que declare un arreglo
	de numeros enteros de 14 posiciones.
	Debera llenar dicho arreglo con numeros
	al azar entre 9 y 127 (puede haber numeros repetidos).
	Por ultimo imprima el contenido de dicho arreglo.*/
	
	srand(time(NULL));
	
	int arreglo[14];
	for(int i = 0; i < end(arreglo)-begin(arreglo); i++){
		//asignar el numero al azar a cada elemento del arreglo
		arreglo[i] = rand()%(127-9+1)+9;
		cout << arreglo[i] << endl;
	}
	
	return 777;
}
