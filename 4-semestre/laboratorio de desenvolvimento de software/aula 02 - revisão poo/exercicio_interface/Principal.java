/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_interface;

/**
 *
 * @author laboratorio
 */
public class Principal {
    public static void main(String[] args) {
        Calculadora c = new Calculadora();
        System.out.println("Soma = "+ c.somar(10, 20));
        System.out.println("Subtracao = "+ c.subtrair(50, 10));
        System.out.println("Multiplicacao = "+ c.multiplicar(5, 25));
        System.out.println("Divisao = "+c.dividir(10, 2));
        System.out.println("Raiz Quadrada = "+c.raizquadrada(4));
        System.out.println("Potencia = "+c.elevarPotencia(2, 3));
        System.out.println("Logaritmo = "+c.logaritmo10(10));
    }
}
