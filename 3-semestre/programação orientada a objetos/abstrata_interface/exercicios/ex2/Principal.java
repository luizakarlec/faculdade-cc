package ex2;

public class Principal {
	public static void main(String[] args) {
		Conta c = new ContaCorrente();
		c.saldo = 1000;
		c.limite = 200;
		
		c.depositar(100);
		c.sacar(500);
		c.sacar(50);
		
		System.out.println(c.saldo);
	}
}
