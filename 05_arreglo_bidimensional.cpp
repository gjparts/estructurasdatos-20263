#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(){
	/*Arreglo bi-dimensional: es un arreglo principal que apunta
	a otros arreglos secundarios.
	-> Es un arreglo de arreglos.*/
	
	int arreglo1[4][3];
	/*en la memoria este arreglo se representa asi:
	arreglo1[0]*->[0][1][2]
	arreglo1[1]*->[0][1][2]
	arreglo1[2]*->[0][1][2]
	arreglo1[3]*->[0][1][2]
	
	lo anterior se vuelve confuso por lo que es mas facil
	para nosotros visualizarlo como una tabla (forma tabular)
	   0 1 2
	0 [][][]
	1 [][][]
	2 [][][]
	3 [][][]
	*/
	
	//tambien de declaran de dos formas: sin inicializar o prellenado
	//1) declarar sin inicializar
	double arreglo2[5][4];
	//2) declarar prellenado o inicializado
	int arreglo3[][3] = {
		{ 67, -9, 100 },
		{ 1, 777, 4 },
		{ 89, 900, 3 },
		{ 9, 356, 11 },
		{ 0, -234, 4567 },
		{ 0, 0, 3 }
	};
	
	cout << "Longitud del arreglo principal de arreglo3: " << end(arreglo3)-begin(arreglo3) << endl;
	cout << "Longitud de cada arreglo secundario en arreglo3: " << end(arreglo3[0])-begin(arreglo3[0]) << endl;
	
	//imprimir el arreglo en formato tabular
	cout << "************************" << endl;
	//recorrer cada item en el arreglo principal:
	for(int i = 0; i < end(arreglo3)-begin(arreglo3); i++){
		//recorrer cada item en cada arreglo secundario
		for(int j = 0; j < end(arreglo3[0])-begin(arreglo3[0]); j++ ){
			cout << arreglo3[i][j] << "\t";
		}
		cout << endl; //salto de linea al terminar cada arreglo secundario
	}
	
	/*Haga un programa en el cual declare un arreglo bidimensional de numeros enteros de 7x6.
	Llene cada uno de los elementos del arreglo con un numero al azar entre -5 y 40,
	no importa que se repitan numeros.
	Al finalizar imprima el arreglo en formato tabular.*/
	srand(time(NULL));
	int a[7][6];
	
	cout << "*******************************************" << endl;
	for(int i = 0; i < end(a)-begin(a); i++){
		for(int j = 0; j < end(a[0])-begin(a[0]); j++ ){
			a[i][j] = rand()%(40-(-5)+1)+(-5);
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	return 432;
}




