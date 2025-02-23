import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		System.out.println("Ola mundo");
		int idade;
		idade = 18;
		char c = 'r';
		double d = 123.4;
		final float f = 3.14f;
		String nome = "Luiza";
		
		System.out.println(idade);
		System.out.println(c);
		System.out.println(d); 
		System.out.println(f); 
		System.out.println(nome);
		
		//LENDO TEXTO
		String texto;
		Scanner teclado = new Scanner(System.in);
		System.out.println("Digite um texto: ");
		texto = teclado.nextLine();
		//mostrando texto
		System.out.println("O texto digitado foi: "+texto);
		
		
		//LENDO NUMERO
		int n;
		System.out.println("Digite um numero: ");
		n = teclado.nextInt();
		//mostrando numero
		System.out.println("O numero digitado foi: "+n);
		
		
		//LENDO FLOAT
		float x;
		System.out.println("Digite um numero: ");
		x = teclado.nextFloat();
		//mostrando float
		System.out.println("O numero digitado foi: "+x);
		
		
		//LENDO CHAR
		char cc;
		System.out.println("Digite um caractere: ");
		cc = teclado.next().charAt(0);
		//mostrando char
		System.out.println("Caractere digitado: "+cc);
		
		
		//IF ELSE
		int idadee;
		System.out.println("Digite a idade: ");
		idadee = teclado.nextInt();
		
		if(idadee>=18)
			System.out.println("Maior de idade!");
		else
			System.out.println("Menor de idade!");
		
		
		//SWITCH CASE
		System.out.println("Escolha um numero entre 1 a 5");
		int numero = teclado.nextInt();
		
		switch (numero) {
			case 1:
				System.out.println("O numero escolhido foi: 1");
				break;
			case 2:
				System.out.println("O numero escolhido foi: 2");
				break;
			case 3:
				System.out.println("O numero escolhido foi: 3");
				break;
			case 4:
				System.out.println("O numero escolhido foi: 4");
				break;
			case 5:
				System.out.println("O numero escolhido foi: 5");
				break;
			default:
				System.out.println("INVALIDO!");
		}
	}
}
