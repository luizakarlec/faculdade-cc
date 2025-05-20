package interface1;

public class Principal {

	public static void main(String[] args) {
		Cachorro c = new Cachorro();
		c.nome = "Koda";
		c.idade = 1;
		
		c.emitirSom();
		c.cuidarPatio();
		c.exibeDados();
		
		Animal g = new Gato();		
		g.emitirSom();
	}
}
