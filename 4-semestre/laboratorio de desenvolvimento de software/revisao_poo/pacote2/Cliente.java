/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote2;

/**
 *
 * @author laboratorio
 */
public class Cliente extends Pessoa {
    public String CPF;
    
    @Override
    public void exibirDados(){
        System.out.println("Exibindo dados do cliente");
        System.out.println("Nome: "+ nome);
        System.out.println("CPF: "+ CPF);
    }
}
