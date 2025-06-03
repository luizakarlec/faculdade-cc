package desafio;

import exemplo.MinhaExcecao;

public class ContaCorrente extends Conta {
	@Override
	void depositar(double deposito) throws MinhaExcecao {
		if(deposito < 0) {
			throw new MinhaExcecao("Deposito negativo");
		}
		else {
			saldo += deposito;
		}
	}

	@Override
	void sacar(double saque) throws MinhaExcecao {
		
		if(saque < 0) {
			throw new MinhaExcecao("Saque negativo");
		}
		else if(saque > saldo) {
			throw new MinhaExcecao("Saldo insuficiente");
		}
		else {
			saldo -= saque;	
		}
	}
}
