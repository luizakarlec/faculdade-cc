package pkg;

public class Principal {

	public static void main(String[] args) {
		int n;
		Pessoa p = new Pessoa();
		System.out.println("Pessoa instanciada!");
		p.nome = "luiza";
		p.idade = 20;
		System.out.println("Nome = "+ p.nome);
		System.out.println("Idade = "+ p.idade);
		
		Pessoa p2 = new Pessoa();
		p2.nome = "ricardo";
		p2.idade = 40;
		System.out.println("Nome = "+ p2.nome);
		System.out.println("Idade = "+ p2.idade);
		
		Pessoa p3 = new Pessoa();
		p3.nome = "frazzon";
		p3.idade = 19;
		System.out.println("Nome = "+ p3.nome);
		System.out.println("Idade = "+ p3.idade);
		
	}

}
