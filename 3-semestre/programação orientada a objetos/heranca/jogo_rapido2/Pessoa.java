package jogo_rapido2;

public class Pessoa {
	protected String nome;
	protected int idade;
	
	public Pessoa(String nome, int idade) {
		this.nome = nome;
		this.idade = idade;
	}
	
	public void exibeDados() {
		System.out.println("Nome: "+ nome +"\nIdade: "+ idade);
	}
}
