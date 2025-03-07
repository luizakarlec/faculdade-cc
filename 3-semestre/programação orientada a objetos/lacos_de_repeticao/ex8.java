package ex8;
import java.util.Scanner;

public class Ex8 {

	public static void main(String args[]) {
		
		Scanner teclado = new Scanner(System.in);
		
		String cidade;
		
		do{
			
			System.out.print("Digite uma cidade: ");
			cidade = teclado.nextLine();

			
		}while(!cidade.equals("São Paulo"));
		
		teclado.close();	
	}
	
}
