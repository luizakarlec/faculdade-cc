package pkg;

public class Principal {

	public static void main(String[] args) {
		Pessoa p = new Pessoa("Luiza", 20, "12345678");
		p.setIdade(22);
		p.apresentarDados();
		
		int idade, ano;
		idade = p.getIdade();
		ano = 2025 - idade;
		System.out.println("Ano de nascimento: "+ano);
		p.setIdade(35);
		p.apresentarDados();
		p.setIdade(-20);
		p.apresentarDados();
		p.setNome("Rodrigo");
		p.apresentarDados();
		
		System.out.println("Nome: "+p.getNome());
		System.out.println("Idade: "+p.getIdade());
		System.out.println("CPF: "+p.getCpf());
		
		p.setNome("Luiza");
		p.setNome(p.getNome() + " Karlec");
		System.out.println("Nome: "+p.getNome());
	}
}
