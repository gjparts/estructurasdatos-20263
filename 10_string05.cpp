#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//Conversion a mayusculas/minusculas
	string str;
	cout << "Digite un string: ";
	getline(cin,str);
	
	//transformar a mayusculas
	transform(str.begin(),str.end(),str.begin(),::toupper);
	cout << "El string convertido a mayusculas es " << str << endl;
	//IMPORTANTE: transform aplica el cambio a la variable original.
	
	//transformar a minusculas
	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout << "El string convertido a minusculas es " << str << endl;
	
	//Si transform afecta a la variable original, como evitamos que eso suceda?
	//haga una copia del string original, y aplique transform a la copia.
	
	cout << "Digite otro string: ";
	getline(cin,str);
	
	//hacer una copia
	string copia = str;
	
	transform(copia.begin(),copia.end(),copia.begin(),::toupper);
	cout << "El string convertido a mayusculas es " << copia << endl;
	transform(copia.begin(),copia.end(),copia.begin(),::tolower);
	cout << "El string convertido a minusculas es " << copia << endl;
	cout << "El string original es " << str << endl;
	
	return 123;
}







