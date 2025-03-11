package pkg;
import java.util.Scanner;

public class PrincipalPessoa {
	
	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		Pessoa p = new Pessoa();
		System.out.print("Digite nome: ");
		p.nome = teclado.nextLine();
		System.out.print("Digite a idade: ");
		p.idade = teclado.nextInt();
		teclado.nextLine();
		System.out.print("Digite o genero: ");
		p.genero = teclado.nextLine();
		
		System.out.println("\nPESSOA");
		System.out.println("nome = "+p.nome);
		System.out.println("idade = "+p.idade);
		System.out.println("genero = "+p.genero);
		
		teclado.close();
	}
}
