package ex1;


public class Principal {

	public static void main(String[] args) throws MinhaExcecao {
		Pessoa p = new Pessoa("Luiza", 20);
		Pessoa p2 = new Pessoa("Vanessa", 150);

		try {
			p2.validarIdade();
		} catch (MinhaExcecao e) {
			System.out.println("Erro: "+e.getMessage());
		}
		
		try {
			p.validarIdade();
		} catch (MinhaExcecao e) {
			System.out.println("Erro: "+e.getMessage());
		}
		
	}
}
