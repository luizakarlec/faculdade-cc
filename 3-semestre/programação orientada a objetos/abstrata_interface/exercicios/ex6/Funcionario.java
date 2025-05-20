package ex6;

public abstract class Funcionario {
	public String nome;
	public double salario;
	
	public Funcionario(String nome, double salario) {
		super();
		this.nome = nome;
		this.salario = salario;
	}

	abstract void calcularSalario();
}
