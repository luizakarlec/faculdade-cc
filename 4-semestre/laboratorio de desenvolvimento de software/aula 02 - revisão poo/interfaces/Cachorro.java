/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package interfaces;

/**
 *
 * @author laboratorio
 */
public class Cachorro implements Animal {

    @Override
    public void emitirSom() {
        System.out.println("auau");
    }

    @Override
    public void movimentar() {
        System.out.println("cachrro andando");
    }
    
}
