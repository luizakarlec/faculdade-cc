package ex1;


public class Pessoa {
	public String nome;
	public int idade;
	
	public Pessoa(String nome, int idade) {
		super();
		this.nome = nome;
		this.idade = idade;
	}
	
	public void validarIdade() throws MinhaExcecao {
		if(idade > 120 || idade < 0) {
			throw new MinhaExcecao("Idade invalida!");
		} else {
			System.out.println("Idade valida!");
		}
	}
}
