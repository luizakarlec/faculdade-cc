package ex4;

public class Casa {
	 public double calcularPreco(int tamanho) {
		 return tamanho * 5;
	 }
	 
	 public double calcularPreco(int tamanho, int quartos) {
		 return tamanho * 5 * quartos;
	 }
}
