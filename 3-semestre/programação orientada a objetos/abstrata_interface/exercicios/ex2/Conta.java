package ex2;

abstract class Conta {
	double saldo;
	double limite;
	
	abstract void depositar(double deposito);
	abstract void sacar(double saque);
}
