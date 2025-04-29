package sobreescrita;

public class Principal {

	public static void main(String[] args) {
		Animal a = new Animal();
		a.nome = "Animal 1";
		a.emitirSom();
		
		a = new Cachorro();
		a.emitirSom();
		
		Cachorro c = new Cachorro();
		c.nome = "Koda";
		c.raca = "vira-lata";
		c.emitirSom();
	}
}
