package ex4;

public class Principal {

	public static void main(String[] args) {
		Casa c = new Casa();
		
		System.out.println("Casa 1 = "+ c.calcularPreco(10));
		System.out.println("Casa 2 = "+ c.calcularPreco(10, 2));
	}

}
