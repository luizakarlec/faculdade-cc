package tratamento_excecao;

public class Exemplo {

	public static void main(String[] args) {
		int[] numeros = {1,2,3};
		
		try {
			System.out.println(numeros[3]);
			
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Exceção: "+e.getMessage());
			System.out.println("Exceção: "+e.toString());
			
		} catch (Exception e) {
			System.out.println("Exceção: "+e.toString());
			
		}
		System.out.println("O programa segue em execução!");
		System.out.println(numeros[3]);
		System.out.println("Agora não segue em execução.");
	}
}
	
