package exemplos;

public class Pessoa {
	private String nome; //public String nome;
	private int idade; //public int idade;
	private String cpf;
	
	public Pessoa(String nome, int idade, String cpf) {
		this.nome = nome;
		this.idade = idade;
		this.cpf = cpf;
	}	
	
	public void apresentarDados() {
		System.out.println("Nome: "+nome);
		System.out.println("Idade: "+idade);
		System.out.println("CPF: "+cpf);
	}
	
	public int getIdade() {
		return idade;
	}
	
	public void setIdade(int idade) {
		if(idade >= 0) {
			this.idade = idade;
		} else {
			System.out.println("Idade inválida");
		}
	}
	
	public String getCpf() {
		return cpf;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
}
