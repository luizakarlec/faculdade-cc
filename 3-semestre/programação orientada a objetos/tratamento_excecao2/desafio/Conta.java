package desafio;

import exemplo.MinhaExcecao;

abstract class Conta {
	public double saldo;
	public double limite;
	
	abstract void depositar(double deposito) throws MinhaExcecao;
	abstract void sacar(double saque) throws MinhaExcecao;
}
