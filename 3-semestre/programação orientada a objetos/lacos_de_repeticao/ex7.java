package ex7;
import java.util.Scanner;

public class Ex7 {
	
	public static void main(String args[]) {
		
		Scanner tec = new Scanner(System.in);
		int nota;
		
		do {
			
			System.out.print("Digite a nota do aluno: ");
			nota = tec.nextInt();
			
		}while(nota != -1);
		
		tec.close();
		
	}

}
