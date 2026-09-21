#include<iostream>

using namespace std;

int main(){
	//console out
	cout << "Hola UNAH" << endl;
	//saber el tamaño de un tipo de datos en bytes
	cout << sizeof(int) << endl;
	//un int es de 4 bytes o sea 32 bit
	
	cout << sizeof(double) << endl;
	//un double es de 8 bytes o sea 64 bit
	
	int x = 45;
	cout << sizeof(x) << endl;
	//la variable x tiene reservados 4 bytes
	
	//console in
	int a,b;
	cout << "Digite un numero entero: ";
	cin >> a;
	cout << "Digite otro numero entero: ";
	cin >> b;
	cout << "La suma de ambos numeros es " << a+b << endl;
	
	//ejecutar comandos del sistema operativo
	system("pause"); //hacer una pause en el programa desde la consola
	system("cls"); //limpia la pantalla de la consola
	
	system("dir C:\\"); //listar los archivos del folder C:\
	//lanzar un programa
	system("start chrome www.califik.com");
	
	return 777;
}








