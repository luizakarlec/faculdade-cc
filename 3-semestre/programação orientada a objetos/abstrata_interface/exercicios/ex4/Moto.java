package ex4;

public class Moto extends Veiclo {

	public Moto(String marca, String modelo, int ano) {
		super(marca, modelo, ano);
		// TODO Auto-generated constructor stub
	}

	@Override
	void acelerar() {
		System.out.println("Moto acelerando!!");
		
	}

	@Override
	void freiar() {
		System.out.println("Moto freiando!!");
		
	}

}
