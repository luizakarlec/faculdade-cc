package sobrecarga;

public class Calculadora {
	public int somar (int x, int y) {
		System.out.println("int");
		return x + y;
	}
	public int somar (int x, int y, int z) {
		System.out.println("int");
		return x + y + z;
	}
	
	public double somar(double x, double y) {
		System.out.println("double");
		return x + y;
	}
	
	public int multiplicar(int x, int y) {
		return x * y;
	}
	
	public double multiplicar(double x, double y) {
		return x * y;
	}
}
