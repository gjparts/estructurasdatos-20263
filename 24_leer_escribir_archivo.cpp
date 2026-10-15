#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	/*Haga un programa que muestre el siguiente menu:
	BITACORA DE EVENTOS
	1) Agregar entrada a la bitacora
	2) Mostrar todos los registros en bitacora
	3) Borrar toda la bitacora
	4) Salir
	Digite la opcion deseada: 
	
	-> 	El menu se volvera a mostrar despues de cada opcion,
		excepto cuando pida salir.
	-> 	La opcion 1, va a preguntar al usuario que
		digite el texto que desea guardar
	   	en la bitacora, este texto lo escribir al final un
		archivo de texto sin perder
	   	lo que ya habia en la bitacora.
	-> 	La opcion 2 va a imprimir el contenido del
		archivo de bitacora en la pantalla
	   	pero van a hacer una pausa cada 10 lineas.
	-> 	La opcion 3 va a vaciar el archivo de texto de la bitacora.*/
	int opcion;
	do{
		system("cls");
		cout << "BITACORA DE EVENTOS" << endl;
		cout << "1) Agregar entrada a la bitacora" << endl;
		cout << "2) Mostrar todos los registros en bitacora" << endl;
		cout << "3) Borrar toda la bitacora" << endl;
		cout << "4) Salir" << endl;
		cout << "Digite la opcion deseada: ";
		cin >> opcion;
		
		if( opcion == 1 ){
			cout << "AGREGAR ENTRADA A LA BITACORA ***************************" << endl;
			archivo.open("bitacora.txt",ios::app);
			if( archivo.is_open() == true ){
				string texto;
				cout << "Digite el texto a ingresar: ";
				cin.ignore();
				getline(cin,texto);
				archivo << texto << endl;
				archivo.close();
			}
			else
				cout << "No tiene permiso de escritura" << endl;
		}
		if( opcion == 2 ){
			cout << "MOSTRAR LOS REGISTROS DE LA BITACORA ***************************" << endl;
			archivo.open("bitacora.txt",ios::in);
			if( archivo.is_open() == true ){
				//recorrer el archivo
				string linea;
				int contador = 1;
				while(archivo.eof() == false){
					getline(archivo,linea);
					cout << contador << "\t" << linea << endl;
					if( contador%10 == 0 ) system("pause");
					contador++;
				}
				archivo.close();
			}
			else
				cout << "Archivo no existe o no tiene permiso." << endl;
		}
		if( opcion == 3 ){
			cout << "LIMPIAR LA BITACORA ***************************" << endl;
			cout << "Desea borrar la bitacora? (S/N) ";
			cin.ignore();
			string respuesta;
			getline(cin,respuesta);
			if( respuesta == "S" ){
				archivo.open("bitacora.txt",ios::out);
				archivo.close();
				cout << "Se ha borrado el archivo de bitacora." << endl;
			}
			else
				cout << "No ha borrado nada, tranquilo." << endl;
		}
		system("pause");
	}while(opcion != 4);
	
	return 777;
}








