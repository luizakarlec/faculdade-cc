package ex5;
import java.util.Scanner;

public class Ex5 {
	
	public static void main(String args[]) {
		
		Scanner teclado = new Scanner(System.in);
		int x, fatorial = 1;
		
		System.out.print("Digite um numero inteiro: ");
		x = teclado.nextInt();
		
		for(int i=x; i>0; i--) {
			fatorial *=  i;
		}
		
		System.out.println("fatorial = "+fatorial);
		
	}

}
