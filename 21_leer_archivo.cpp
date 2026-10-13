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
		int numero; //variable temporal para colocar numeros leidos
		int suma = 0;
		int pares = 0, impares = 0; //contadores
		while(archivo.eof() == false){
			//eof quiere decir end of file
			//while va a repetirse hasta que archivo envie true en el eof
			getline(archivo,linea); //avanzar una linea y depositarla en un string (necesario)
			
			try{
				 numero = stoi(linea);
				 suma += numero;
				 
				 //par o impar
				 if(numero%2 == 0)
				 	pares++;
				else
					impares++;
			}catch(exception ex){
				//si falla la conversion, llega aqui, no hacemos nada: ignoramos
			}
			
			contador++; //sumar 1 al contador
		}
		cout << "Cantidad de lineas leidas: " << contador << endl;
		cout << "Suma de los numeros leidos: " << suma << endl;
		cout << "Cantidad de pares leidos: " << pares << endl;
		cout << "Cantidad de impares leidos: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
		archivo.close(); //se recomienda cerrar el archivo cuando ya no lo ocupe
	}
	else
		cout << "Archivo no existe o no tiene permiso" << endl;
	
	return 678;
}
