package classe_abstrata1;

abstract class Animal {
	public String especie;
	public int idade;
	
	abstract void emitirSom();
	
	public void exibedados() {
		System.out.println("Espécie: "+ especie);
		System.out.println("Idade: "+ idade);
	}	
}
