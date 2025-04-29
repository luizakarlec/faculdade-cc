package sobreescrita;

public class Cachorro extends Animal {
	public String raca;
	
	@Override
	public void emitirSom() {
		System.out.println("au au");
	}
}
