package pkg;
import java.util.Scanner;

public class PrincipalCarro {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		Carro c = new Carro();
		System.out.print("Digite a marca do carro: ");
		c.marca = teclado.nextLine();
		System.out.print("Digite o modelo do carro: ");
		c.modelo = teclado.nextLine();
		System.out.print("Digite o ano de fabricação do carro: ");
		c.anoFabricacao = teclado.nextInt();
		teclado.nextLine();
		
		Carro c2 = new Carro();
		System.out.print("\nDigite a marca do carro 2: ");
		c2.marca = teclado.nextLine();
		System.out.print("Digite o modelo do carro 2: ");
		c2.modelo = teclado.nextLine();
		System.out.print("Digite o ano de fabricação do carro 2: ");
		c2.anoFabricacao = teclado.nextInt();
		
		System.out.println("\nCARRO 1");
		System.out.println("marca = "+c.marca);
		System.out.println("modelo = "+c.modelo);
		System.out.println("ano fabricação = "+c.anoFabricacao);
		System.out.println("CARRO 2");
		System.out.println("marca = "+c2.marca);
		System.out.println("modelo = "+c2.modelo);
		System.out.println("ano fabricação = "+c2.anoFabricacao);

		teclado.close();
	}

}
