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
		
	}catch(exception &ex){
		//para extrar el mensaje de error de una excepcion
		//debera declarar a ex como &ex
		cout << ex.what() << endl;
	}
	
	return 111;
}
