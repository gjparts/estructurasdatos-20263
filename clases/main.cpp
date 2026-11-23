#include<iostream>
#include "Arbol.h"
#include "Persona.h"
#include "Mascota.h"
#include "Empleado.h"
#include "Estudiante.h"
#include "CuentaAhorro.h"
using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Arbol
	//existen dos formas:
	//1) al HEAP (no se recomienda a menos que ocupe millones de datos)
	//2) al STACK (recomendado para la mayoria de casos)
	
	//instanciar un objeto usando el HEAP
	Arbol *a1 = new Arbol();
	//asignar valores a las propiedades de a1
	a1->alto = 5.25;
	a1->ancho = 1.2;
	a1->especie = "Ceiba Pentandra";
	
	//leer valores de a1
	cout << "a1 ------------------" << endl;
	cout << "ancho: " << a1->ancho << endl;
	cout << "alto: " << a1->alto << endl;
	cout << "especie: " << a1->especie << endl;
	
	//instanciar un objeto usando el STACK
	Arbol a2; //cuando el objeto va en el Stack no se ejecuta el new para construirlo
	//escribir las propiedades de a2
	a2.alto = 7.56;
	a2.ancho = 1.82;
	a2.especie = "Caoba";
	
	//leer las propiedades de a2
	cout << "a2 ------------------" << endl;
	cout << "ancho: " << a2.ancho << endl;
	cout << "alto: " << a2.alto << endl;
	cout << "especie: " << a2.especie << endl;
	//Observe que al trabajar en el Stack no se usan las flechas para
	//acceder a las propiedades, sino se usa punto.
	//Otra cosa es que el constructor no se ejecuta con new.
	
	Persona per1;
	per1.nombre = "Gerardo Portillo";
	per1.edad = 44;
	per1.genero = 'M';
	
	cout << "per1 ------------------" << endl;
	cout << "nombre: " << per1.nombre << endl;
	cout << "edad: " << per1.edad << endl;
	cout << "genero: " << per1.genero << endl;
	
	Persona per2;
	cout << "per2 ------------------" << endl;
	cout << "nombre: " << per2.nombre << endl;
	cout << "edad: " << per2.edad << endl;
	cout << "genero: " << per2.genero << endl;
	//Note que per2 lo hicimos usando el constructor sin parametros
	//por lo tanto nombre, edad y genero presentaran los valores con que fue
	//inicializado.
	
	//aqui vamos a crear a per3, usando el constructor con todos los parametros:
	Persona per3("Filomeno Colinas",82,'M');
	per3.imprimir();
	
	//he creado per4 usando el constructor con dos parametros
	Persona per4("Irene",44);
	per4.imprimir();
	per4.saludar(true);
	per4.saludar(false);
	
	Mascota m1;
	m1.Imprimir();
	
	//recuerden que al objeto se le puede asignar valores
	//aunque lo haya construido sin parametros:
	m1.nombre = "Palmerolo";
	m1.especie = "Burro";
	m1.genero = 'M';
	m1.edad = 4;
	m1.Imprimir();
	
	Mascota m2("Tinieblo", "Gato", 'M', 2, false);
	m2.Imprimir();
	
	Mascota m3("Rosita","Lora",'H',1,false);
	m3.Imprimir();
	
	Mascota m4("Killer","Perro",'M',3,true);
	m4.Imprimir();
	
	try{
		Empleado em1("Gerardo", 44, 'M', 15000, 'T');
		em1.imprimir();
		
		//es posible leer la edad de em1 desde este ambito?
		//cout << em1.edad << end;
		//lo anterior da error porque edad es private
		//para poder leer la edad debe hacerlo usando su respectivo get:
		cout << em1.getEdad() << endl;
		//si quiero escribir algo en em1, debo hacer a traves del set:
		em1.setSalario(18000);
		cout << em1.getSalario() << endl;	
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	try{
		Estudiante es1("Gerardo","20012002049","1401198201055",'M',
			44,84.5f,"Ingenieria Industrial");
		es1.imprimir();
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	system("pause"); //hacer una pausa
	
	//imaginemos que el cliente tiene 3 cuentas de ahorro y
	//le quiero dar un menu estilo cajero automatico
	CuentaAhorro c1("Gerardo Portillo","12341234");
	CuentaAhorro c2("Gerardo Portillo","76532234");
	CuentaAhorro c3("Gerardo Portillo","98765432");
	
	//CuentaAhorro actual = c1; //variable flag o bandera para la cuenta en uso
	//lo anterior no hace un apuntador al objeto original
	//para poder afectar a c1 por medio de actual es necesario hacer un
	//apuntador local:
	CuentaAhorro *actual = &c1;
	//aqui creamos un apuntador "supuestamente" al HEAP que apunte
	//a la direccion de memoria de c1 (vea el ampersand)
	//en realidad esto es un engaño al compilador ya que pareciera
	//que apuntamos al HEAP; pero c1 fue declarado en el STACK
	//por lo tanto el apuntador en realidad no va al HEAP sino al STACK.
	//C++ cree que actual apunta al HEAP cuando en realidad no; pero
	//se nos exige que cualquier miembro de actual se refiera a el con flecha ->
	//en lugar de usar punto, lo cual cambiaremos a continuacion:
	
	int opcion;
	do{
		system("cls"); //limpiar la pantalla
		cout << "1) Consultar la cuenta" << endl;
		cout << "2) Depositar dinero" << endl;
		cout << "3) Retirar dinero" << endl;
		cout << "4) Cambiar de cuenta" << endl;
		cout << "5) Salir" << endl;
		cout << "Digite una opcion: ";
		cin >> opcion;
		
		system("cls"); //limpiar la pantalla
		if(opcion == 1){
			cout << "Consulta de cuenta ----------------------------------" << endl;
			cout << "Cliente: " << actual->nombreCliente << endl;
			cout << "Numero de cuenta: " << actual->numeroCuenta << endl;
			cout << "Saldo actual: " << actual->getSaldo() << endl;
		}
		if(opcion == 2){
			cout << "Depositar Dinero ------------------------------------" << endl;
			cout << "Digite el monto a depositar: ";
			float monto;
			cin >> monto;
			try{
				actual->depositar(monto);
				cout << "Deposito realizado correctamente" << endl;
			}catch(exception &ex){
				cout << ex.what() << endl;
			}
		}
		if(opcion == 3){
			cout << "Retirar Dinero ------------------------------------" << endl;
			cout << "Digite el monto a retirar: ";
			float monto;
			cin >> monto;
			try{
				actual->retirar(monto);
				cout << "Retiro realizado correctamente, tome su dinero." << endl;
			}catch(exception &ex){
				cout << ex.what() << endl;
			}
		}
		if(opcion == 4){
			cout << "Cambiarse de cuenta de ahorro ---------------------" << endl;
			cout << "1) " << c1.numeroCuenta << ", Saldo: " << c1.getSaldo() << endl;
			cout << "2) " << c2.numeroCuenta << ", Saldo: " << c2.getSaldo() << endl;
			cout << "3) " << c3.numeroCuenta << ", Saldo: " << c3.getSaldo() << endl;
			cout << "Seleccione la cuenta deseada: ";
			int seleccion;
			cin >> seleccion;
			if(seleccion == 1) actual = &c1; //se apunta a la direccion del objeto (no es copia)
			if(seleccion == 2) actual = &c2;
			if(seleccion == 3) actual = &c3;
			if(seleccion < 1 || seleccion > 3) cout << "Cuenta no valida" << endl;
		}
		
		system("pause");
	}while(opcion != 5);
	
	
	return 123;
}









