package jogo_rapido2;

public class Principal {

	public static void main(String[] args) {
		Pessoa p = new Pessoa("Luiza", 20);
		p.exibeDados();
		
		PessoaJuridica pj = new PessoaJuridica("Vanessa", 22, "12345");
		pj.exibeDados();
		System.out.println("CNPJ = "+pj.cnpj);
	}
}
