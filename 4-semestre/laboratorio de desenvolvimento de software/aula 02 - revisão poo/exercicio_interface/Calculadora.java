/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_interface;

import static java.lang.Math.log;
import static java.lang.Math.log10;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

/**
 *
 * @author laboratorio
 */
public class Calculadora implements ICalculadora {

    @Override
    public double somar(double n1, double n2) {
        return n1 + n2;
    }

    @Override
    public double subtrair(double n1, double n2) {
        return n1 - n2;
    }

    @Override
    public double multiplicar(double n1, double n2) {
        return n1 * n2;
    }

    @Override
    public double dividir(double n1, double n2) {
        return n1 / n2;
    }

    @Override
    public double elevarPotencia(double n1, double n2) {
        return pow(n1, n2);
    }

    @Override
    public double logaritmo10(double n1) {
        return log10(n1);
    }

    @Override
    public double raizquadrada(double n1) {
        return sqrt(n1);
    }
}
