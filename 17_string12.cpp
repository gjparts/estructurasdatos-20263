#include<iostream>
using namespace std;

int main(){
	/*Conversiones en C++
	En la libreria standard (std) de C++ vienen una serie
	de funciones para convertir entre tipos, las mas populares son:
	stoi	string to int (string a entero)
	stof	string to float
	stod	string to double
	stol	string to long
	stoll	string to long long
	to_string	de cualquier numero a string
	*/
	
	//string a entero
	string str = "82.77";
	int n1 = stoi(str); //conversion a entero (trunca la parte decimal, no redondea)
	cout << "str: " << str << endl;
	cout << "n1: " << n1 << endl;
	
	//y si el numero no se puede convertir?
	//str = "UNAH";
	//n1 = stoi(str);
	//lo anterior hace crashear al compilador.
	
	//si el string comienza con numeros y luego tiene letras:
	str = "423abc";
	n1 = stoi(str);
	cout << "str: " << str << endl;
	cout << "n1: " << n1 << endl;
	//C++ trunca la parte alfabetica y solo deja la parte numerica
	
	//string a double
	str = "3.1416656712312";
	double n2 = stod(str);
	cout << "str: " << str << endl;
	cout << "n2: " << n2 << endl;
	
	//string a float
	str = "4.6789646";
	float n3 = stof(str);
	cout << "str: " << str << endl;
	cout << "n3: " << n3 << endl;
	
	//string a long (long es un entero de 64 bit)
	str =  "12341234";
	long n4 = stol(str);
	cout << "str: " << str << endl;
	cout << "n4: " << n4 << endl;
	
	//string a long long (entero de 128 bit)
	str = "1234123412345";
	long long n5 = stoll(str);
	cout << "str: " << str << endl;
	cout << "n5: " << n5 << endl;
	
	//convertir cualquier numero a string
	int val1 = 48;
	double val2 = 79.4;
	float val3 = 45.2f;
	long val4 = 12345678;
	long long val5 = 9999999999;
	
	string tmp;
	tmp = to_string(val1);
	cout << "val1 a string: " << tmp << endl;
	tmp = to_string(val2);
	cout << "val2 a string: " << tmp << endl;
	tmp = to_string(val3);
	cout << "val3 a string: " << tmp << endl;
	tmp = to_string(val4);
	cout << "val4 a string: " << tmp << endl;
	tmp = to_string(val5);
	cout << "val5 a string: " << tmp << endl;
	
	return 1234;
}







