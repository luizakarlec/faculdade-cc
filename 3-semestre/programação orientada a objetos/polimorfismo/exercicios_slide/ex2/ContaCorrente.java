package ex2;

public class ContaCorrente extends ContaBancaria {
	
	@Override
	public void calcularSaldo() {
		System.out.println("Saldo da conta corrente : "+saldo);
	}
}
