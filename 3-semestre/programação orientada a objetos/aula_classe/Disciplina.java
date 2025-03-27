package pkg;
import java.util.Scanner;

public class Disciplina {

	public static void main(String[] args) {
		Laboratorio lab = new Laboratorio();
		Professor p = new Professor();
		
		lab.local = "Laboratorio 311/P4";
		p.nome = "Ricardo";
		
		System.out.println("O nome do professor é: "+p.nome);
		System.out.println("A local da aula é: "+lab.local);
		
		Professor p2 = new Professor();
		Laboratorio lab2 = new Laboratorio();
		
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Nome professor = ");
		p2.nome = teclado.nextLine();
		System.out.print("Nome local = ");
		lab2.local = teclado.nextLine();
		
		System.out.println("O nome do professor é: "+p2.nome);
		System.out.println("A local da aula é: "+lab2.local);
		
		teclado.close();
	}

}
