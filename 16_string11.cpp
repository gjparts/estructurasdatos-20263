#include<iostream>
using namespace std;

int main(){
	/*Haga un arreglo de string que tenga los colores siguientes:
	Rojo, Amarillo, Azul, Verde, Gris, Rosa, Naranja, Celeste
	
	Luego haga una rutina que altere o modifique cada color del arreglo
	agregando un guion bajo entre cada uno de los caracteres de cada color.
	
	Por ultimo imprimir el arreglo de colores*/
	
	string colores[] = {"Rojo", "Amarillo", "Azul", "Verde",
					"Gris", "Rosa", "Naranja", "Celeste"};
					
	for(int i = 0; i < end(colores)-begin(colores);i++){
		//variable temporal para ir copiando los char del color actual
		string copia = "";
		//recorrer cada char del color actual e irlo poniendo en la copia
		//junto con el guion bajo respectivo
		for(int j = 0; j < colores[i].length(); j++){
			copia = copia + colores[i][j] + "_";
		}
		//reemplazar el color actual con la copia
		colores[i] = copia;
		//imprimir el color actual
		cout << colores[i] << endl;
	}
	
	return 123;
}




