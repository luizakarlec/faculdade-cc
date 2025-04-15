package exemplo;

public class Carro {
	protected String nome;

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void exibeMsg() {
		System.out.println("Estou na classe Carro\nO nome do carro é: "+nome);
	}
}
