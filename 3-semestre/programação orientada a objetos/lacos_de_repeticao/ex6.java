package ex6;
import java.util.Scanner;

public class Ex6 {
	
	public static void main(String args[]) {
		int op;
		Scanner sc = new Scanner(System.in);
		
		
		do {
			
			System.out.print("Digite um int ('0' paara finalizar programa):");
			op = sc.nextInt();
			
		}while(op != 0);
		
		sc.close();
	}

}
