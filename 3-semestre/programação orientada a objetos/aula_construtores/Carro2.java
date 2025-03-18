package aula_construtores2;

public class Carro {
	public String marca;
	public String modelo;
	public boolean alugado;
	
	public boolean verificaDisponibilidade() {
		return alugado;
	}
	
	public void alugar() {
		System.out.println("\nALUGANDO CARRO");
		if(!verificaDisponibilidade()) {
			alugado = true;
			System.out.println("Carro alugado");
		}
		else {
			System.out.println("Carro indisponivel");
		}
	}
	
	public void devolver() {
		System.out.println("\nDEVOLVENDO CARRO");
		if(verificaDisponibilidade()) {
			alugado = false;
			System.out.println("Carro devolvido");
		}
		else {
			System.out.println("Carro ja disponivel");
		}
	}
	
	public void exibirDados() {
		System.out.println("\nEXIBINDO DADOS");
		System.out.println("Marca: "+marca);
		System.out.println("Modelo: "+modelo);
		System.out.println("Alugado: "+alugado);
	}
}
