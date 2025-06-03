package ex3;

public class MinhaExcecao extends IllegalArgumentException  {

	public MinhaExcecao() {
		super();
	}
	
	public MinhaExcecao(String message) {
		super(message);
	}
}
