#include<iostream>
using namespace std;

int main(){
	//un string es una coleccion de elementos char
	string carrera = "Ingenieria en Sistemas";
	cout << carrera << endl;
	
	//obtener la longitud de un string
	cout << "Longitud de carrera: " << carrera.length() << endl;
	
	//en C++ se puede acceder a los caracteres dentro de un string
	//similar a como si fuera un arreglo; pero recuerde que un
	//string en C++ no es un arreglo.
	//los caracteres en un string de C++ se enumeran de 0 hasta N-1
	cout << "El primer char de carrera es " << carrera[0] << endl;
	cout << "El char numero 5 de carrera es  " << carrera[5] << endl;
	cout << "El ultimo char de carrera es " << carrera[carrera.length()-1] << endl;
	
	//se puede reemplazar un char dentro de un string
	string fruta = "Sandia";
	cout << fruta << endl;
	//cambio de algunos char
	fruta[4] = '1';
	fruta[1] = '@';
	cout << fruta << endl;
	
	//Importante: una variable de tipo de char en realidad lo que almacena
	//es un numero entero el cual indica a que caracter corresponde dicho
	//numero en la tabla de caracteres utilizada.
	char c1 = 'a';
	cout << "el valor de c1 es " << c1 << endl;
	c1 = c1+1;
	cout << "el valor de c1 es " << c1 << endl;
	
	//esto tambien puede ocurrir en un string
	string color = "Amarillo";
	cout << color << endl;
	//sumar 3 al primer caracter de color:
	color[0] = color[0] + 3;
	cout << color << endl;
	
	//se puede sumar dos variables char?
	char cr1 = 'A', cr2 = 'B';
	cout << cr1+cr2 << endl; //si lo suma devolvera 131, A vale 65, B vale 66
	cout << cr1 << cr2 << endl; //si los separa imprimira AB
	
	//se puede sumar elementos char a un string?
	string nombre = "Gerardo";
	char cr3 = 'X';
	nombre = nombre + cr3;
	cout << nombre << endl;
	
	//entonces es posible sumar cr1 y cr2 sin obtener un numero entero?
	string algo = ""; //se hace un string en blanco
	algo = algo + cr1 + cr2; //luego se le concatena al string los char
	cout << algo << endl;
	
	//concatenar string con string
	string s1 = "UNAH";
	string s2 = "Cortes";
	string s3 = "Sistemas";
	string s4 = s1+" CAMPUS "+s2+" "+s3;
	cout << s4 << endl;
	
	//concatenar string con numeros
	int edad = 43;
	double estatura = 1.79;
	string s5 = "Mi edad es "+to_string(edad)+" y mi altura es "+to_string(estatura);
	cout << s5 << endl;
	
	//extraer los primer 4 caracteres de un string en C++
	string s6 = to_string(estatura);
	cout << s6.substr(0,4) << endl;
	
	return 123;
}
