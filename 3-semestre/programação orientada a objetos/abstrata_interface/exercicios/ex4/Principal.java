package ex4;

public class Principal {

	public static void main(String[] args) {
		Carro c = new Carro("ford", "ka", 2020);
		c.acelerar();
		c.freiar();
		
		Moto m = new Moto("honda", "cb-350", 2015);
		m.acelerar();
		m.freiar();

	}

}
