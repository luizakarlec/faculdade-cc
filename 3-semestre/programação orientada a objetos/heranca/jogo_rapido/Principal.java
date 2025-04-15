package jogo_rapido;

public class Principal {

	public static void main(String[] args) {
		Cachorro c = new Cachorro();

		c.setNome("Bela");
		c.setIdade(6);
		c.setSom("AUAU");
		c.setRaca("Border Collie");

		System.out.println("Nome: "+c.getNome());
		c.latir();
	}

}
