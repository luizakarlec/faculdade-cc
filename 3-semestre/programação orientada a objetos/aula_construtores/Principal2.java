package aula_construtores2;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		Carro c = new Carro();
		System.out.print("Digite a marca do carro: ");
		c.marca = teclado.nextLine();
		System.out.print("Digite o modelo do carro: ");
		c.modelo = teclado.nextLine();
		
		c.exibirDados();
		c.alugar();
		c.alugar();
		c.exibirDados();
		c.devolver();
		c.devolver();
		c.exibirDados();
		
		teclado.close();
	}

}
