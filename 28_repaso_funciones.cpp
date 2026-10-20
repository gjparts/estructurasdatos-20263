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
		cout << elevar(13,-3) << endl;
	}catch(exception &ex){
		//para extrar el mensaje de error de una excepcion
		//debera declarar a ex como &ex
		cout << ex.what() << endl;
	}
	
	return 111;
}
