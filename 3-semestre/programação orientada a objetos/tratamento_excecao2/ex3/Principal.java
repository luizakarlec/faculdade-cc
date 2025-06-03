package ex3;

public class Principal {

	public static void main(String[] args) {
		Agenda a = new Agenda();
		
		try {
			a.adicionarContato(null, null);
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		
		try {
			a.adicionarContato(null, "123");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
	}
}
