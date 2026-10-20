//archivo de funciones
#include<iostream>
#include<stdexcept> //libreria para hacer: throw
using namespace std;

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
