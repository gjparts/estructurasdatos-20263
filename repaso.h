//archivo de funciones
#include<iostream>
#include<stdexcept> //libreria para hacer: throw
#include<cmath>
using namespace std;

/*1. Escriba una funcion llamada elevar que reciba
dos numeros long, uno para la base y otro para la potencia,
la funcion debe retornar un long resultado de elevar el numero
base a la potencia sin utilizar la funcion pow.
-> la potencia no puede ser un numero negativo.*/

long elevar(long base, long potencia){
	//validacion de parametros
	//A las reglas que validan valores de entrada
	//se les conoce como GUARD CLAUSES (clausulas de seguridad)
	if(potencia < 0)
		throw invalid_argument("potencia no debe ser negativa");
	/*throw esta dentro de stdexcept, permite lanzar
	una excepcion la cual se puede capturar en un bloque try-catch,
	throw termina la ejecucion de la funcion en lugar del return.*/
	
	long tmp = 1;
	for(int i = 1; i <= potencia; i++)
		tmp = tmp * base;
		
	return tmp;
}

/*2. Defina una funcion llamada hipotenusa la cual debe retornar
la longitud de la hipotenusa de un triangulo rectangulo.
Dicha funcion recibira los lados del triangulo, el tipo de dato
de la funcion y de sus parametros sera double.
-> No se permite lados negativos.*/
double hipotenusa(double a, double b){
	//guard clause
	if(a < 0 || b < 0)
		throw invalid_argument("hipotenusa: No se permite lados negativos");
	
	return sqrt(pow(a,2)+pow(b,2));
}

/*3. Escriba una funcion que reciba dos numeros enteros. Esta funcion va
a retornar true si el primer numero es multiplo del segundo numero, se retorna
false en caso contrario.*/
bool multiplo(int x, int y){
	//forma 1: programa estructurado clasico
	/*if(x%y == 0)
		return true;
	else
		return false;*/
	
	//forma 2: retornar el booleano de la expresion de comparacion (mas eficiente)
	//return (x%y == 0);
	
	//forma 3: usando el operador ternario
	return (x%y == 0 ? true : false);
}

/*4. Escriba una funcion que imprima un rectangulo relleno de caracteres.
Dicha funcion recibira como parametros: ancho y largo del rectangulo
Tambien recibira como tercer parametro el caracter usado para dibujarlo*/

/*cuando se solicite una funcion que no retorna valor sino que solo
se requiere hacer un trabajo adicional lo mas recomendado es usar
una funcion void, estas funciones son extensiones del programa principal.
Si nota no tienen return:*/
void imprimirRectangulo(int ancho, int largo, char caracter){
	for(int i = 1; i <= largo; i++){
		for(int j = 1; j <= ancho; j++){
			cout << caracter;
		}
		cout << endl;
	}
}








