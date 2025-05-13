package pkg2;

public class Produto {
	private String nome;
	private double preco;
	
	public Produto(String nome, double preco) {
		super();
		this.nome = nome;
		this.preco = preco;
	}
	
	public String getNome() {
		return nome;
	}
	public double getPreco() {
		return preco;
	}
	public void setPreco(double preco) {
		this.preco = preco;
	}
	
	//retorna cópia do objeto
	/*
	public Produto clone() {
		return new Produto(this.nome, this.preco);
	}
	*/
	
	//retorna objeto
	public Produto clone() {
		return this;
	}
}
