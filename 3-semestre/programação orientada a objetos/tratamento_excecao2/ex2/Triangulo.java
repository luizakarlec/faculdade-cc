package ex2;

public class Triangulo {
	 public double lado1; 
	 public double lado2;
	 public double lado3;
	 
	public Triangulo(double lado1, double lado2, double lado3) {
		super();
		this.lado1 = lado1;
		this.lado2 = lado2;
		this.lado3 = lado3;
	}
	 
	public void validarTriangulo() throws MinhaExcecao {
		if((lado1 + lado2) <= lado3 || (lado2 + lado3) <= lado1 || (lado3 + lado1) <= lado2) {
			throw new MinhaExcecao("Triângulo invalido!!");
		} else {
			System.out.println("Triangulo válido!");
		}
	}
}
