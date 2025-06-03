package exemplo;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) throws MinhaExcecao {
		Scanner sc = new Scanner(System.in);
		double n1, n2;
		System.out.println("Digite dois numeros: ");
		n1 = sc.nextDouble();
		n2 = sc.nextDouble();
		divide(n1, n2);
		sc.close();
	}
	
	public static void divide(double n1, double n2) throws MinhaExcecao {
		if(n2 == 0) {
			throw new MinhaExcecao("Impossivel realizar divisão por 0");
		}
		else {
			System.out.println("O resultado da divisão é: " + (n1/n2));
		}
	}
}
