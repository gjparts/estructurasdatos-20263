#include<iostream>
#include<fstream>
using namespace std;

int main(){
	/*Haga un programa que lea el archivo ejemplo_24mil.txt
	Al finalizar el programa debera imprimir cuantas lineas tiene,
	cual es la suma de todos los numeros encontrados en él,
	cuantos de esos numeros son pares y cuantos son impares,
	tambien imprima el promedio de todos los numeros leidos.
	-> No es necesario imprimir cada linea.*/
	
	fstream archivo; //estructura de datos para leer archivos
	
	//abrir el archivo de texto para lectura
	archivo.open("ejemplo_24mil.txt",ios::in);
	
	//verificar que el archivo se pudo abrir
	if( archivo.is_open() == true ){
		cout << "Archivo abierto correctamente." << endl;
		
		//recorrer el archivo linea por linea e imprimiendo cada una
		string linea; //variable para ir leyendo cada linea
		int contador = 0; //variable acumulador
		while(archivo.eof() == false){
			//eof quiere decir end of file
			//while va a repetirse hasta que archivo envie true en el eof
			getline(archivo,linea); //avanzar una linea y depositarla en un string (necesario)
			contador++; //sumar 1 al contador
		}
		cout << "Cantidad de lineas leidas: " << contador << endl;
		archivo.close(); //se recomienda cerrar el archivo cuando ya no lo ocupe
	}
	else
		cout << "Archivo no existe o no tiene permiso" << endl;
	
	return 678;
}
