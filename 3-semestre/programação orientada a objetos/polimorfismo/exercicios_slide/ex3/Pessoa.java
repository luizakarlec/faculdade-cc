package ex3;

public class Pessoa {
	public void falar(String mensagem) {
		System.out.println(mensagem);
	}
	
	public void falar(String mensagem, int rep) {
		for(int i = 0; i < rep; i++) {
			System.out.println(mensagem);
		}
	}
}
