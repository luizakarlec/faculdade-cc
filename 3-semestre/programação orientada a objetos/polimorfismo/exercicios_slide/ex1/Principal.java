package ex1;

public class Principal {

	public static void main(String[] args) {
		FormaGeometrica q = new FormaGeometrica();
		q.base = 4;
		q.altura = 2;
		System.out.println("*Forma Geométrica*");
		System.out.println("AREA = "+q.calcularArea());
		
		Triangulo t = new Triangulo();
		t.base = 4;
		t.altura = 2;
		System.out.println("*Triângulo*");
		System.out.println("AREA = "+t.calcularArea());
	}

}
