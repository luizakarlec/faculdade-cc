package desafio;

import exemplo.MinhaExcecao;

public class Principal {

	public static void main(String[] args) {
		ContaCorrente c = new ContaCorrente();
		c.saldo = 1000;
		
		try {
			c.depositar(-10);
		} catch (MinhaExcecao e) {
			System.out.println("Erro: "+e.getMessage());
		}
	}
}
