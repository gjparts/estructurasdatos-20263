#include<iostream>
#include<fstream>
using namespace std;

int main(){
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
			cout << linea << endl; //imprimir cada linea (opcional)
		}
		cout << "Cantidad de lineas leidas: " << contador << endl;
		archivo.close(); //se recomienda cerrar el archivo cuando ya no lo ocupe
	}
	else
		cout << "Archivo no existe o no tiene permiso" << endl;
	
	return 678;
}
