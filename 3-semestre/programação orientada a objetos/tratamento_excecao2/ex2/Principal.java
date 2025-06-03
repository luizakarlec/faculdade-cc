package ex2;

public class Principal {

	public static void main(String[] args) {
		Triangulo t = new Triangulo(1, 1, 1);
		Triangulo t2 = new Triangulo(1, 2, 30);
		
		try {
			t.validarTriangulo();
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
			
		}
		
		try {
			t2.validarTriangulo();
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
	}

}
