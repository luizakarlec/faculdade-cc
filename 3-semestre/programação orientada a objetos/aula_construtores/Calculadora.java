package aula_construtores3;

public class Calculadora {
	public double n1;
	public double n2;
	
	public double somar() {
		double resultado;
		resultado = n1 + n2;
		return resultado;
	}
	
	public double multiplicar() {
		double resultado;
		resultado = n1 * n2;
		System.out.println("Multiplicação: "+resultado);
		return resultado;
	}
	
	public double dividir(double num1, double num2) {
		double resultado;
		resultado = num1 / num2;
		System.out.println("Divisão: "+resultado);
		return resultado;
	}
	
	public double subtrair(double num1, double num2) {
		double resultado;
		resultado = num1 - num2;
		return resultado;
	}
}
