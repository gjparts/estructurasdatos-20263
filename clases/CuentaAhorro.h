//Clase CuentaAhorro
#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		//Propiedades
		float saldo;
	public:
		//Propiedades
		string nombreCliente;
		string numeroCuenta;
		
		//Constructor
		CuentaAhorro(string nombreCliente, string numeroCuenta){
			this->nombreCliente = nombreCliente;
			this->numeroCuenta = numeroCuenta;
			this->saldo = 0;
		}
		
		//Metodos get y set
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if(monto < 0)
				throw invalid_argument("Monto a depositar no puede ser negativo.");
			else
				this->saldo += monto; //se acepta y se suma
		}
		void retirar(float monto){
			if(monto < 0) throw invalid_argument("Monto a retirar no puede ser negativo.");
			if(monto > this->saldo) throw invalid_argument("Fondos insuficientes.");
			//si llego hasta aqui es porque todo salio bien: early returns
			this->saldo -= monto; //se acepta y se resta
		}
		
};

#endif
