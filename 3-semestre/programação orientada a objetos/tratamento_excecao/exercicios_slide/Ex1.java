package exercicios_slide;
import java.util.Scanner;
import java.lang.Math;

public class Ex1 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		int numero;
		double raiz;
		System.out.print("Digite um numero: ");
		
		try {
			numero = teclado.nextInt();
			raiz = Math.sqrt(numero);
			System.out.println("raiz quadrada: "+raiz);
			
		} catch (Exception e) {
			System.out.println("Exceção: "+e.toString());
		}
		
		teclado.close();
	}
}
