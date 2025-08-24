/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote4;

/**
 *
 * @author laboratorio
 */
public class Casa {
    public double calcularPreco(int tamanho){
        double preco = tamanho * 10;
        return preco;
    }
    
    public double calcularPreco(int tamanho, int quartos){
        double preco = tamanho * 10 * quartos;
        return preco;
    }
}
