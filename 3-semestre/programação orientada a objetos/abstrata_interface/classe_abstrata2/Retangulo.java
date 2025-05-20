package classe_abstrata2;

class Retangulo extends Forma {
	private double largura;
	private double altura;

	public Retangulo(double largura, double altura) {
		super();
		this.largura = largura;
		this.altura = altura;
	}

	@Override
	public double area() {
		return largura * altura;
	}

	@Override
	public double perimetro() {
		return 2 * (largura + altura);
	}

}
