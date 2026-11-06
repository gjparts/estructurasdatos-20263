/*Apuntadores con arreglos
Cuando se trabaja con arreglos por su limitada capacidad
se recomienda trajarlos en el stack.
El usar apuntadores con arreglos nos permite tener acceso
a su begin() y su end() a traves de algo conocido como
Template o plantilla el cual es un mecanismo ofrecido por
C++ para poder trabajar con colecciones de las cuales
el tamaño puede variar.*/
#include<iostream>
#include<cmath>
#include<stdexcept>
#include<ctime>
using namespace std;

//funcion void que imprime un arreglo de enteros recibido como apuntador
template<size_t N>
void imprimirArreglo(int (&arr)[N]){
	cout << "--------------------------------" << endl;
	for(int i = 0; i < end(arr)-begin(arr); i++)
		cout << arr[i] << endl;
}
//funcion void que imprime un arreglo de float recibido como apuntador
template<size_t N>
void imprimirArreglo(float (&arr)[N]){
	cout << "--------------------------------" << endl;
	for(int i = 0; i < end(arr)-begin(arr); i++)
		cout << arr[i] << endl;
}
//funcion void que imprime un arreglo de double recibido como apuntador
template<size_t N>
void imprimirArreglo(double (&arr)[N]){
	cout << "--------------------------------" << endl;
	for(int i = 0; i < end(arr)-begin(arr); i++)
		cout << arr[i] << endl;
}

/*Haga una funcion que reciba un arreglo apuntado
de numeros double, dicha funcion va a alterar cada elemento
del arreglo dividiendolo a la mitad. La funcion no va a retornar nada.*/
template<size_t N>
void arregloMitad(double (&arr)[N]){
	for(int i = 0; i < end(arr)-begin(arr); i++)
		arr[i] = arr[i]/2.0;
}

/*Haga una funcion que reciba un arreglo apuntado de numeros float,
dicha funcion va a alterar cada elemento del arreglo aplicandole
la raiz cuadrada. La funcion no va a retornar nada.
-> Si alguno de los valores dentro del arreglo es negativo
   entonces debera disparar una excepcion indicando que alguno
   de los valores dentro del arreglo es negativo y no se le puede
   calcular la raiz cuadrada. (guard clause)*/
template<size_t N>
void arregloRaizCuadrada(float (&arr)[N]){
	for(int i = 0; i < end(arr)-begin(arr); i++){
		//validar que el valor no sea negativo
		if(arr[i] < 0)
			throw invalid_argument("No se permite valores negativos");
		
		arr[i] = sqrt(arr[i]);
	}
}

/*Haga una funcion void que reciba un arreglo apuntado de numeros enteros,
dicha funcion va a alterar cada elemento del arreglo colocandole un
numero al azar entre un valor minimo y un valor maximo, los cuales
se recibiran como parametros de la funcion.
O sea que la funcion va a recibir tres parametros: el arreglo,
el numero minimo y el numero maximo.
-> debe validar que el valor minimo no supere al valor maximo. (guard clause)*/
template<size_t N>
void arregloAzar(int (&arr)[N], int minimo, int maximo){
	if(minimo > maximo)
		throw invalid_argument("valor minimo no debe superar al maximo");
	
	srand(time(NULL));
	for(int i = 0; i < end(arr)-begin(arr); i++){
		arr[i] = rand()%(maximo-minimo+1)+minimo;
	}
}

int main(){
	int enteros[] = {6,800,-7,1000,12,4,22,-98};
	imprimirArreglo(enteros);
	float cifras[] = {5.6f, 2.25f, 3.1416f, -90.5f, 100, -8.27f};
	imprimirArreglo(cifras);
	double numeros[] = {5.3, 7.8, 900, -12.5, 100.00007, 9.9};
	imprimirArreglo(numeros);
	
	arregloMitad(numeros);
	imprimirArreglo(numeros);
	
	float arr1[] = {6,7,8,100,45,23,7.8f};
	arregloRaizCuadrada(arr1);
	imprimirArreglo(arr1);
	
	try{
		cout << "----------------------------" << endl;
		float arr2[] = {1,2,3,4,5,-7,90,100.5f};
		arregloRaizCuadrada(arr2);
		imprimirArreglo(arr2);
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	int valores[15];
	arregloAzar(valores,7,89);
	imprimirArreglo(valores);
	
	return 777;
}





