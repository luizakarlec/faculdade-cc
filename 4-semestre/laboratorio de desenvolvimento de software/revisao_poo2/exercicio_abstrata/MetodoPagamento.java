/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_abstrata;

import java.util.Random;
/**
 *
 * @author laboratorio
 */
abstract class MetodoPagamento {
    public String nomeMetodo;
    public int idPagamento;
    
    Random gerador = new Random();

    public MetodoPagamento(String nomeMetodo) {
        this.nomeMetodo = nomeMetodo;
        this.idPagamento = gerador.nextInt(1000);
    }
    
    public void processaPagamento(double valor) {
        System.out.println("Processando pagamento de "+ valor +" no metodo "+ nomeMetodo);
        System.out.println("Pagamento realizado!");
    }
    
    public void mostraDetalhesPagamento(){
        System.out.println("Metodo de pagamento = "+ nomeMetodo);
        System.out.println("Id do pagamento = "+ idPagamento);
    }
}
