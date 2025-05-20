package classe_abstrata1;

public class Principal {

	public static void main(String[] args) {
		Cachorro c = new Cachorro();
		c.emitirSom();
		c.cuidarPatio();
		
		c.especie = "Cachorro";
		c.idade = 5;
		c.raca = "Lulu";
		c.exibedados();
	}
}
