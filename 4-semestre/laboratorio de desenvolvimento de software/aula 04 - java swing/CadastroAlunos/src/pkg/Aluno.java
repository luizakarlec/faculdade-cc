/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg;

public class Aluno {
    public String nome;
    public String data;
    public String sexo;
    public String matricula;
    public String curso;
    public String CPF;
    
    public String rua;
    public String numero;
    public String bairro;
    public String cidade;
    public String CEP;
    public String estado;
    public String telefone;

    public Aluno(String nome, String data, String sexo, String matricula, String curso, String CPF, String rua, String numero, String bairro, String cidade, String CEP, String estado, String telefone) {
        this.nome = nome;
        this.data = data;
        this.sexo = sexo;
        this.matricula = matricula;
        this.curso = curso;
        this.CPF = CPF;
        this.rua = rua;
        this.numero = numero;
        this.bairro = bairro;
        this.cidade = cidade;
        this.CEP = CEP;
        this.estado = estado;
        this.telefone = telefone;
    }
    
    public Object[] obterDados(){
        return new Object[] {nome, data, sexo, matricula, curso, CPF, rua, numero, bairro, cidade, CEP, estado, telefone};
    }
    
}
