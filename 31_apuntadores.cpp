/*Apuntadores con string
Se recomienda apuntarlos al Stack porque un string en c++ no
es una coleccion grande.
Si apunta el string al Stack va a poner tener acceso al length
y a los caracteres del string como normalmente lo hemos trabajado.*/
#include<iostream>
#include<algorithm>
using namespace std;

//haga una funcion void que convierta un string apuntado a mayusculas
void mayusculas(string &str){
	transform(str.begin(),str.end(),str.begin(),::toupper);
}

/*haga una funcion void que reciba un string apuntado y que lo altere
reemplazandole los espacios en blanco por guiones bajos*/


int main(){
	system("color E"); //para colorear se envia un numero hexadecimal entre 0 y F
	
	string carrera = "Ingenieria en Sistemas Computacionales";
	mayusculas(carrera);
	cout << carrera << endl;
	
	system("color 4E"); //cambia los colores de toda la pantalla
	cout << "texto amarillo sobre fondo rojo" << endl;
	
	
	
	return 987;
}
