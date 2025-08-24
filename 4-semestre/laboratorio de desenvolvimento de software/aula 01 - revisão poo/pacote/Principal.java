/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pacote;

/**
 *
 * @author luiza
 */
public class Principal {
    public static void main(String[] args) {
        Pessoa p = new Pessoa("Luiza", 20);
        System.out.println("Nome: "+p.getNome());
        System.out.println("Idade: "+p.getIdade());
        
        p.setNome("Vanessa");
        p.setIdade(80);
        String retorno = p.getNome();
        System.out.println("Nome: "+retorno);
        System.out.println("Idade: "+p.getIdade());
        
        Aluno a = new Aluno();
        a.setNome("Luiza");
        a.setNota1(6);
        a.setNota2(10);
        System.out.println("Aluno: "+ a.getNome());
        System.out.println("Media: "+ a.calculaMedia());
        
        Carro c = new Carro();
        c.setNome("Carro 1");
        System.out.println("Nome do carro: "+ c.getNome());
        c.exibirMsg();
        
        Onibus o = new Onibus();
        o.setNome("Onibus 1");
        o.setModelo("Modelo x");
        System.out.println("Nome do onibus: "+ o.getNome());
        System.out.println("Modelo do onibus: "+ o.getModelo());
        o.exibirMsg();
        
        Cachorro k = new Cachorro("Vira lata", "Koda", 1, "auauau");
        k.latir();
        
    }
}
