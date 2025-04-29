package sobrecarga;

public class Principal {

	public static void main(String[] args) {
		Calculadora calculadora = new Calculadora();
		int resultado1 = calculadora.somar(2, 3);
		int resultado2 = calculadora.somar(2, 3, 4);
		System.out.println("Resultado 1 = "+resultado1);
		System.out.println("Resultado 2 = "+resultado2);
		
		double resultado3 = calculadora.somar(3, 5);
		System.out.println("Resultado 3 = "+resultado3);	
	}
}
