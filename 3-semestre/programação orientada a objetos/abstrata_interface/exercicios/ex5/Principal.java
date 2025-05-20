package ex5;

public class Principal {

	public static void main(String[] args) {
		PessoaFisica f = new PessoaFisica();
		f.cpf = "123";
		f.efetuarCompra();
		
		PessoaJuridica j = new PessoaJuridica();
		j.cnpj = "456";
		j.efetuarCompra();
	}
}
