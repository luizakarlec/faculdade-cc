package ex2;

public class ContaCorrente extends Conta {

	@Override
	void depositar(double deposito) {
		saldo += deposito;
	}

	@Override
	void sacar(double saque) {
		if(saque < limite) {
			saldo -= saque;	
		}
	}

}
