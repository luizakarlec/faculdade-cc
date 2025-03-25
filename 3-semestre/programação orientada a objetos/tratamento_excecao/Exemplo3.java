package tratamento_excecao;

public class Exemplo3 {

	public static void main(String[] args) {
		String numero = "abc";
		
		try {
			int valor = Integer.parseInt(numero);
		} catch(NumberFormatException e) {
			System.out.println("Exceção: "+e.getMessage());
		}
	}
}
