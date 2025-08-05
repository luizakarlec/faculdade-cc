/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package classe_abstrata;

/**
 *
 * @author laboratorio
 */
public class Principal {
    public static void main(String[] args) {
        Quadrado q = new Quadrado();
        q.setDescricao("Quadrado");
        q.lado = 7;
        System.out.println("Area do "+q.getDescricao()+": "+q.calcularArea());
        
        Retangulo r = new Retangulo();
        r.setDescricao("Retangulo");
        r.base = 4;
        r.altura = 5;
        System.out.println("Area do "+r.getDescricao()+": "+r.calcularArea());
        
        Triangulo t = new Triangulo();
        t.setDescricao("Triangulo");
        t.base = 5;
        t.altura = 5;
        System.out.println("Area do "+t.getDescricao()+": "+t.calcularArea());
    }
}