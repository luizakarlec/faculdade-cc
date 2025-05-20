package ex3;

public class ContaInvestimento extends Conta{
	public double investimento;
	
	@Override
	void depositar(double deposito) {
		investimento += deposito;
		System.out.println("Investimento realizado!!");	
	}

	@Override
	void sacar(double saque) {
		if(saque < investimento) {
			investimento -= saque;
			System.out.println("Saque realizado do investimento!");
		}
	}
}
