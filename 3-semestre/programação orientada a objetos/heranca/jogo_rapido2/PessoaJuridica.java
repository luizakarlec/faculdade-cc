package jogo_rapido2;

public class PessoaJuridica extends Pessoa{
	protected String cnpj;
	protected String socio;
	protected String dtAbertura;
	
	public PessoaJuridica(String nome, int idade, String cnpj) {
		super(nome, idade); //super = classe mãe = Pessoa
		this.cnpj = cnpj;
	}	
	
}
