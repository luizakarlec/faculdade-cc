package ex6;

public class Gerente extends Funcionario {

	public Gerente(String nome, double salario) {
		super(nome, salario);
		// TODO Auto-generated constructor stub
	}

	@Override
	void calcularSalario() {
		System.out.println("Salario gerente: "+ salario);
		
	}
}
