package ex10;
import java.util.Scanner;

public class Ex10 {
	
	public static void main(String args[]) {
		
		Scanner teclado = new Scanner(System.in);
		double n, soma = 0, media;
		int i = 0;
		
		do {
			
			System.out.print("Numero: ");
			n = teclado.nextDouble();
			soma += n;
			i++;
			
		}while(n != 0);
		
		media = soma / (i-1);
		System.out.println("Media = "+media);
		
		teclado.close();
		
	}

}
