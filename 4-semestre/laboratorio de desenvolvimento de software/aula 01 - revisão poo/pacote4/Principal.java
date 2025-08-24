/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote4;

/**
 *
 * @author laboratorio
 */
public class Principal {
    public static void main(String[] args) {
        Casa c = new Casa();
        
        double preco1 = c.calcularPreco(10);
        System.out.println("Preco 1: "+preco1);
        
        double preco2 = c.calcularPreco(10, 3);
        System.out.println("Preco 2: "+preco2);
    }
}
