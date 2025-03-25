package exercicios_slide;

import java.util.Scanner;

public class Ex3 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Digite uma string para converter para int: ");
		String oi;
		oi = teclado.nextLine();
		
		try {
			int valor = Integer.parseInt(oi);
			System.out.println("String convertida: "+valor);
		} catch(NumberFormatException e) {
			System.out.println("Exceção: "+e.getMessage());
		}
		
		teclado.close();
	}

}
