/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_abstrata;

/**
 *
 * @author laboratorio
 */
public class Principal {
    public static void main(String[] args) {
        CartaoCreditoPagamento cc = new CartaoCreditoPagamento("Credito");
        cc.processaPagamento(200);
        cc.mostraDetalhesPagamento();
        
        PIXPagamento pix = new PIXPagamento("PIX");
        pix.processaPagamento(1.50);
        pix.mostraDetalhesPagamento();
        
        PayPalPagamento pp = new PayPalPagamento("PayPal");
        pp.processaPagamento(50);
        pp.mostraDetalhesPagamento();
    }
}
