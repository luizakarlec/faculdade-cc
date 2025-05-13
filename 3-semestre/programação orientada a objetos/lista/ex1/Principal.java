package pkg;

public class Principal {

	public static void main(String[] args) {
		Pessoa pessoa = new Pessoa("Luiza", 20);
		meuMetodo(pessoa);
	}
	
	public static void meuMetodo(Pessoa p) {
		System.out.println("Nome: "+p.getNome());
		System.out.println("Idade: "+p.getIdade());
	}

}
