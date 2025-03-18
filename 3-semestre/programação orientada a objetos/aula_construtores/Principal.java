package aula_construtores;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		String ma, mo;
		System.out.print("Digite a marca do carro: ");
		ma = teclado.nextLine();
		System.out.print("Digite o modelo do carro: ");
		mo = teclado.nextLine();
		
		Carro c = new Carro(ma, mo); //chamada do construtor
		//c.marca = "Ford";
		//c.modelo = "Corcel";
		
		System.out.println("\nCarro 1");
		c.exibirDados();
		
		System.out.println("\nCarro 2");
		Carro c2 = new Carro("Saveiro");
		c2.marca = "VW";
		c2.exibirDados();
		
		System.out.println("\nCarro 3");
		Carro c3 = new Carro();
		c3.marca = "Fiat";
		c3.modelo = "Uno";
		c3.exibirDados();
		
		teclado.close();
	}
}
