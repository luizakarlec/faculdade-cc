package classe_abstrata2;

public class Principal {

	public static void main(String[] args) {
		Retangulo r = new Retangulo(10, 30);
		System.out.println("Area: "+r.area());
		System.out.println("Perímetro: "+r.perimetro());
		
		Circulo c = new Circulo(10);
		System.out.println("Area: "+c.area());
		System.out.println("Perímetro: "+c.perimetro());
	}

}
