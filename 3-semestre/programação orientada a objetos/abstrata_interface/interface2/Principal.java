package interface2;

public class Principal {

	public static void main(String[] args) {
		Smartphone s = new Smartphone("12345", "luizakarlec@gmail");
		s.verificaEmail();
		s.realizarChamada();
	}
}
