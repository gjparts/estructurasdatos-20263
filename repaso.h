//archivo de funciones
#include<iostream>
#include<stdexcept> //libreria para hacer: throw
#define _USE_MATH_DEFINES	//agregue esto antes de cmath para poder usar M_PI
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

/*5. Haga una funcion que retorne el area de un circulo,
dicha funcion va a recibir el radio del mismo.
-> La funcion debe soportar el uso de double y float*/
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}
float areaCirculo(float radio){
	return M_PI*pow(radio,2);
}
//cuando tenemos dos funciones con el mismo nombre pero diferente
//firma a esto se le conoce como sobrecarga de funciones, o sea
//dos o mas funciones con mismo nombre; pero diferente tipo de dato.

/*6. Escriba una funcion llamada minimo, la cual debe devolver el
menor de tres numeros. Dicha funcion tiene que permitir trabajar
con numeros enteros, numeros double o numeros float*/

/*En ocasiones nos encontramos con sobrecarga de funciones en la que
repetimos el mismo codigo complejo varias veces lo cual no es practico.
Aqui lo mas recomendado es dejar la logica solo en la version de la
funcion que use el tipo de dato con mayor precision y luego las
versiones con tipos de dato de menor precision solo deben mandar
a llamar a la de mayor precision, esto se logra de la siguiente forma:*/

//primero: se crea la funcion usando el tipo de dato mayor precision
double minimo(double a, double b, double c){
	if(a <= b && a <= c) return a;
	if(b <= a && b <= c) return b;
	if(c <= a && c <= b) return c;
}
//segundo: las funciones de menor precision deben andar a llamar a la de mayor precision
int minimo(int a, int b, int c){
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}
float minimo(float a, float b, float c){
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}
//note que convertimos a double los valores int y los valores float
//de cada una de las otras funciones.
//esto para que al mandar a llamar minimo desde ellas se fuerce a consumir
//la funcion que espera los doubles y es donde esta la logica.









