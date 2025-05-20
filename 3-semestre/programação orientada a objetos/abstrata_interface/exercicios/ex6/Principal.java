package ex6;

public class Principal {

	public static void main(String[] args) {
		Gerente g = new Gerente("Luiza", 10000);
		g.calcularSalario();
		Vendedor v = new Vendedor("Frazzon", 3000);
		v.calcularSalario();
	}
}
