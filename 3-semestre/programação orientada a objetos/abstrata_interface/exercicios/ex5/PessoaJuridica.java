package ex5;

public class PessoaJuridica extends Pessoa {
	public String cnpj;

	@Override
	void efetuarCompra() {
		System.out.println("Compa efetuada no cnpj "+ cnpj);
		
	}
	
	
}
