#include<iostream>
#include "repaso.h"
using namespace std;

int main(){
	try{
		cout << elevar(4,3) << endl;
		cout << elevar(2,5) << endl;
		cout << elevar(9,6) << endl;
		cout << elevar(7,0) << endl;
		cout << elevar(45,1) << endl;
		//cout << elevar(13,-3) << endl;
		
		cout << hipotenusa(4,5) << endl;
		cout << hipotenusa(7,3) << endl;
		cout << hipotenusa(1,1) << endl;
		
		cout << multiplo(5,2) << endl;
		cout << multiplo(6,3) << endl;
		cout << multiplo(2079,4) << endl;
		
		imprimirRectangulo(6,7,'x');
		//como void no retorna valor no se puede combinar con cout:
		//cout << imprimirRectangulo(5,4,'*') << endl;
		//tampoco se puede asignar a una variable, porque void no retorna nada:
		//string x = imprimirRectangulo(5,4,'*');
		
		cout << areaCirculo(5.0f) << endl; //ejecuta la version para float
		cout << areaCirculo(7.8) << endl; //ejecuta la version para double
		//cout << areaCirculo(5) << endl; //no existe version para int: falla
		
		/*C++ infiere el tipo de dato de un numero dependiendo de si tiene o 
		no decimales, sin decimales lo considera int, con decimales lo considera
		double; pero si lleva decimales y una f al final entonces lo considera float.*/
		
		//si Usted alimenta el valor de la funcion con una variable
		//aqui C++ no necesita inferir el tipo, porque Usted ya lo coloco al 
		//declarar la variable:
		float z = 6.5; //z no necesita la f porque ya lo dice el tipo de dato.
		cout << areaCirculo(z) << endl; //ejecuta la version para float
		
		cout << minimo(1,2,3) << endl;
		cout << minimo(50.5,34.22,83.33) << endl;
		cout << minimo(6.7f,8.8f,1.4f) << endl;
		
		
	}catch(exception &ex){
		//para extrar el mensaje de error de una excepcion
		//debera declarar a ex como &ex
		cout << ex.what() << endl;
	}
	
	return 111;
}
