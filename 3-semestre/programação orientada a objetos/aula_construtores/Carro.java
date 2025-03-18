package aula_construtores;

public class Carro {
	public String marca;
	public String modelo;
	
	public Carro(String marcaCarro, String modeloCarro) {
		marca = marcaCarro;
		modelo = modeloCarro;
	}
	
	public Carro(String modeloCarro) {
		modelo = modeloCarro;
	}
	
	public Carro() { //quando nao tenho construtor, o compilador entente isso
		
	}

	public void exibirDados() {
		System.out.println("Marca: "+marca);
		System.out.println("Modelo: "+modelo);
	}
}
