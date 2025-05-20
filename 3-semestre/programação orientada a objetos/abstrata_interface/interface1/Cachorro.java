package interface1;

public class Cachorro implements Animal {
	public String nome;
	public int idade;
	
	@Override
	public void emitirSom() {
		System.out.println("AU AU");
		
	}
	
	public void cuidarPatio() {
		System.out.println("Estou cuidando do pátio!");
	}

	@Override
	public void exibeDados() {
		System.out.println("Cachorro!");
		System.out.println("Nome: "+nome);
		System.out.println("Idade: "+idade);
	}
}
