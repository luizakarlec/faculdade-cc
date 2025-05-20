package ex4;

public class Carro extends Veiclo {

	public Carro(String marca, String modelo, int ano) {
		super(marca, modelo, ano);
		// TODO Auto-generated constructor stub
	}

	@Override
	void acelerar() {
		System.out.println("Carro acelerando!!");
		
	}

	@Override
	void freiar() {
		System.out.println("Carro freiando!!");
		
	}

}
