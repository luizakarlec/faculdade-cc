package ex5;

public class PessoaFisica extends Pessoa {
	public String cpf;
	
	@Override
	void efetuarCompra() {
		System.out.println("Compra realizada no cpf "+ cpf);
		
	}

}
