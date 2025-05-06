package ex2;

public class Principal {

	public static void main(String[] args) {
		ContaBancaria b = new ContaBancaria();
		b.saldo = 250;
		b.calcularSaldo();
		
		ContaCorrente c = new ContaCorrente();
		c.saldo = 100;
		c.calcularSaldo();
	}

}
