#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	
	//abrir un archivo en modo de escritura
	//si C++ no encuentra el archivo a escribir: lo creara automaticamente.
	archivo.open("prueba.txt",ios::app);
	
	/*ios::app	abre el archivo para escribir sin eliminar el contenido que ya existe
				APPEND = agregar
	  ios::out	abre el archivo para escribir y elimina el contenido que ya estaba
	  			OUTPUT = salida*/
	
	//verificar si se tiene permiso para escribir en el archivo
	if( archivo.is_open() == true ){
		cout << "Archivo si se puede escribir" << endl;
		//escribir dentro del archivo:
		archivo << "UNAH Cortes" << endl;
		archivo << 3+7 << endl;
		int z = 100;
		archivo << "El valor de z es " << z << endl;
		archivo << "Rojo\tAmarillo\tVerde\tAzul" << endl;
		
		//cerrar el archivo
		archivo.close();
		cout << "Fin del programa" << endl;
	}
	else
		cout << "No se puede escribir el archivo, quiza no tenga permiso." << endl;
	
	return 777;
}








