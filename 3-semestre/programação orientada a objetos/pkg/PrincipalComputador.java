package pkg;
import java.util.Scanner;

public class PrincipalComputador {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		Computador c = new Computador();
		System.out.print("Digite a marca do computador: ");
		c.marca = teclado.nextLine();
		System.out.print("Digite o modelo do computador: ");
		c.modelo = teclado.nextLine();
		System.out.print("Digite o tipo de computador: ");
		c.tipo = teclado.nextLine(); 
		System.out.print("Digite o preco do computador: ");
		c.preco = teclado.nextDouble();

		Computador c2 = new Computador();
		c2.marca = "Asus";
		c2.modelo = "Tuf Gaming";
		c2.tipo = "Notebook";
		c2.preco = 2000;
		
		System.out.println("\nCOMPUTADOR 1");
		System.out.println("marca = "+c.marca);
		System.out.println("modelo = "+c.modelo);
		System.out.println("tipo = "+c.tipo);
		System.out.println("preço = "+c.preco);
		System.out.println("\nCOMPUTADOR 2");
		System.out.println("marca = "+c2.marca);
		System.out.println("modelo = "+c2.modelo);
		System.out.println("tipo = "+c2.tipo);
		System.out.println("preço = "+c2.preco);

		
		teclado.close();
	}

}
