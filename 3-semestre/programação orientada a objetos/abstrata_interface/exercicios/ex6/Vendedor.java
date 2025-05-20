package ex6;

public class Vendedor extends Funcionario {

	public Vendedor(String nome, double salario) {
		super(nome, salario);
		// TODO Auto-generated constructor stub
	}

	@Override
	void calcularSalario() {
		System.out.println("Salario vendedor: "+ salario);
		
	}

}
