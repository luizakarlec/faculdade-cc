package tratamento_excecao;

public class Exemplo2 {

	public static void main(String[] args) {
		int a, b;
		a = 10;
		b = 0;
		
		try {
			System.out.println("resultado = "+(a/b));	
		} catch (ArithmeticException e) {
			System.out.println("Exceção: "+e.toString());
		}
	}
}
