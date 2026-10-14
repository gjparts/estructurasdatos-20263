#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*Haga un programa que lea el archivo ejemplo_24mil.txt
	y debera copiar todos los numeros encontrados
	en dicho archivo hacia un nuevo archivo llamado copia.txt
	-> Cada nueva ejecucion del programa debera borrar
	   el contenido de copia.txt*/
	fstream origen, destino;
	
	//abrir el archivo de origen para lectura
	origen.open("ejemplo_24mil.txt", ios::in);
	
	if( origen.is_open() == true ){
		//si logro abrir el origen; entonces abrimos el archivo destino
		//para escritura completa
		destino.open("copia.txt",ios::out);
		
		if(destino.is_open() == true)
		{
			//recorrer el origen linea a linea
			string linea;
			while( origen.eof() == false ){
				getline(origen,linea);
				//si la linea leida es numero, la escribimos en la copia
				try{
					int numero = stoi(linea);
					destino << numero << endl; //si la conversion se hizo escribimos
				}catch(exception ex){}
			}
			origen.close();
			destino.close();
			cout << "La copia ha finalizado." << endl;
		}
		else
			cout << "No se puede abrir el archivo de destino, no tiene permiso." << endl;
	}
	else
		cout << "Archivo origen no existe o no tiene permiso" << endl;
	
	return 123;
}
