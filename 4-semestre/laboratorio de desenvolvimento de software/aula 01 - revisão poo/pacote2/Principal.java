/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote2;

/**
 *
 * @author laboratorio
 */
public class Principal {
    public static void main(String[] args) {
        Pessoa p = new Pessoa();
        p.nome = "Luiza";
        p.exibirDados();
        
        Cliente c = new Cliente();
        c.nome = "Luiza da Silva";
        c.CPF = "123";
        c.exibirDados();
    }
}
