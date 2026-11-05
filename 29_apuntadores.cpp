/*Apuntador de Memoria (Puntero, Pointer)
Permite acceder a determinada ubicacion de memoria en otro ambito.
O sea: un apuntador es un acceso directo al contenido de una variable
que se encuentra en un ambito externo.

El apuntador ofrece acceso a la direccion de memoria de una variable,
a esto se le conoce como pase por referencia (byref)

En C++ existe dos espacios de memoria para poder trabajar por
medio de apuntadores:
1) el espacio STACK
2) el espacio HEAP
*/
#include<iostream>
#include<cmath>
using namespace std;

//funcion que suma 10 al numero enviado (no retorna)
void sumarDiez(int numero){
	numero = numero + 10;
}
//las funciones tradicionales en C++ no alteran la variable en su origen
//ya que lo que le envia por parametro es una copia del valor del origen
//a esto se le conoce como pase por valor (byval)

//funcion que suma 10 al numero enviado; pero que altere a la variable original
//Metodo 1: usando el HEAP para almacenar el apuntador de memoria
void sumarDiezApuntadorHEAP(int *numero){
	*numero = *numero + 10;
}
/*Que es el HEAP?
Es la totalidad de la memoria RAM del equipo, sus caracteristicas:
1) es mas grande (porque es toda la RAM)
2) es mas lenta porque al haber mas memoria hay mas ubicaciones posibles
3) las variables en el HEAP viven por mas tiempo, se destruyen hasta
   que el programa termina
4) HEAP es un espacio de memoria inseguro segun los expertos ya que
   abre una brecha a los hackers para disponer de la totalidad de la RAM
5) es importante conocer HEAP por retrocompatibilidad con programas viejos*/

//Metodo 2: usando el STACK para almacenar el puntero de memoria
void sumarDiezApuntadorStack(int &numero){
	numero = numero + 10;
}
/*Que es el STACK?
Es la porcion de memoria RAM que el sistema operativo ha reservado
para su programa, sus caracteristicas son:
1) es mas pequeña, crece segun la configuracion de su sistema operativo
2) es mas rapida porque al ser menos memoria es mas facil localizar algo
3) las variables viven por menos tiempo, el sistema operativo las destruye
   una vez detecta que son huerfanas. (de eso se encarga el Recolector de Basura)
4) es mas segura porque trabajar en el STACK impide invadir la memoria de
   otros programas
5) usar apuntadores al STACK permite acceder al begin, end y funciones
   de las variables.*/

/*cuando usar HEAP y cuando usar STACK?
1) para funciones pequeñas, trabajar con arreglos, string, estructuras
de datos no tan voluminosas, objetos se recomienda usar el STACK.
2) para trabajar con estructuras de datos enormes, grandes colecciones
   de objetos como pilas, colas, listas que almacenen millones de registros
   se recomienda usar el HEAP.
-> los expertos en ciberseguridad aconsejan evitar en lo posible
   el uso de HEAP y recomiendan que mejor optimice su codigo para
   no verse en la necesidad de almacenar grandes volumenes de informacion
   en la RAM.*/

//Otros ejemplos:
//Haga una funcion void usando apuntadores al Stack que
//eleve al cubo un numero entero enviado como parametro.
//Puede usar pow si gusta.
void cubo(int &numero){
	numero = pow(numero,3);
}

/*Haga una funcion void que divida a la mitad el numero double
que le enviemos, la funcion debe afectar al valor de origen.*/
void mitad(double &numero){
	numero = numero/2.0;
}

int main(){
	int x = 50;
	sumarDiez(x);
	cout << x << endl;
	//se imprime 50 porque x no fue afectado en el ambito de origen (main)
	
	//para poder alterar x desde una funcion externa, ocupa apuntador.
	
	//prueba de la funcion que apunta al HEAP:
	sumarDiezApuntadorHEAP(&x);
	//note que la variable al ser enviada al HEAP se le coloca un & antes
	//al & se le conoce como operador de indireccion
	cout << x << endl;
	
	//prueba de la funcion que apunta al STACK:
	sumarDiezApuntadorStack(x);
	cout << x << endl;
	//note que cuando se usa apuntadores al STACK no se necesita enviar &
	
	//observe que las funciones apuntadas alteran a x desde un ambito externo
	
	int z = 9;
	cubo(z);
	cout << z << endl;
	
	double w = 25;
	mitad(w);
	cout << w << endl;
	
	return 777;
}







