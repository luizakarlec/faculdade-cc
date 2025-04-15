package exemplo;

public class Principal {

	public static void main(String[] args) {
		Carro c = new Carro();
		c.setNome("Fusca");
		c.exibeMsg();
		
		Onibus o = new Onibus();
		o.setNome("Marcopolo");
		o.setModdelo("OF-1519");
		
		o.exibeMsg();
		
		System.out.println("O nome do carro: "+o.getNome());
		System.out.println("Modelo do onibus: "+o.getModelo());
	}
}
