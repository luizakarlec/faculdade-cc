package classe_abstrata1;

public class Cachorro extends Animal {
	public String raca;

	@Override
	void emitirSom() {
		System.out.println("AU AU");
		
	}
	
	public void cuidarPatio() {
		System.out.println("Estou cuidando do pátio!");
	}

	@Override
	public void exibedados() {
		System.out.println("Espécie: "+ especie);
		System.out.println("Idade: "+ idade);
		System.out.println("Raça: "+ raca);
	}
}
