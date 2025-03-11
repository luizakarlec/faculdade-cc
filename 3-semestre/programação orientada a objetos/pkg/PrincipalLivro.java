package pkg;
import java.util.Scanner;

public class PrincipalLivro {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		Livro l = new Livro();
		System.out.print("Digite o titulo: ");
		l.titulo = teclado.nextLine();
		System.out.print("Digite o autor: ");
		l.autor = teclado.nextLine();
		System.out.print("Digite o ano de publicacao: ");
		l.anoPublicacao = teclado.nextInt();
		
		System.out.println("\nLIVRO");
		System.out.println("titulo = "+l.titulo);
		System.out.println("autor = "+l.autor);
		System.out.println("ano de publicacao = "+l.anoPublicacao);
		
		teclado.close();

	}

}
