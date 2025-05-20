package classe_abstrata2;

public class Circulo  extends Forma{
	private double raio;
	
	public Circulo(double raio) {
		super();
		this.raio = raio;
	}

	@Override
	public double area() {
		return Math.PI * raio * raio;
	}
	
	@Override
	public double perimetro() {
		return 2 * Math.PI * raio;
	}
	
}
