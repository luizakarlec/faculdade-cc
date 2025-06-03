package ex3;

public class Agenda {
	public String nome;
	public String tel;
	
	public void adicionarContato(String nome, String tel) {
		
		if(nome == null && tel == null) {
			throw new MinhaExcecao("Nome e telefone nulo!");
		}
		
		if(nome == null) {
			throw new MinhaExcecao("Nome nulo!");
		} else {
			this.nome = nome;
		}
		
		if(tel == null) {
			throw new MinhaExcecao("Telefone nulo!");
		} else {
			this.tel = tel;
		}
		
	}
}
