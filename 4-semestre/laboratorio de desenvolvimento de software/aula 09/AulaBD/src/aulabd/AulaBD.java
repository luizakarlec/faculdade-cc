/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aulabd;

import DAO.PessoaDAO;
import beans.Pessoa;
import conexao.Conexao;

/**
 *
 * @author laboratorio
 */
public class AulaBD {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Pessoa p = new Pessoa();
        p.setNome("Luiza");
        p.setSexo("F");
        p.setIdioma("Português");
        
        //Conexao con = new Conexao();
        //con.getConexao();
        PessoaDAO pDAO = new PessoaDAO();
        pDAO.inserir(p);
    }
    
}
