/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote;

/**
 *
 * @author laboratorio
 */
public class Cachorro extends Animal {
    private String raca;

    public Cachorro(String raca, String nome, int idade, String som) {
        super(nome, idade, som);
        this.raca = raca;
    }

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }
    
    public void latir(){
        System.out.println(getSom());
    }
}
