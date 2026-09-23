#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

int main(){
	//generacion de numeros al azar en C++
	//disparar un generador de numeros aleatorios
	//basado en un valor semilla (seed)
	//nuestro valor semilla sera la fecha/hora de la computadora
	srand(time(NULL));
	
	//generar un numero al azar entre 0 y 6
	cout << rand()%7 << endl;
	
	//generar un numero al azar entre 1 y 6
	cout << rand()%6+1 << endl;
	
	//generar un numero al azar entre 5 y 65
	cout << rand()%(65-5+1)+5 << endl;
	//formula: rand()%(MAX-MIN+1)+MIN
	
	//imprimir 10 numeros al azar entre 13 y 72
	cout << "------------------------------" << endl;
	for(int i = 1; i <= 10; i++)
		cout << rand()%(72-13+1)+13 << endl;
	
	return 123;
}
