/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Produto;
import conexao.Conexao;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author laboratorio
 */
public class ProdutoDAO {
    private Conexao conexao;
    private Connection conn;
    
    public ProdutoDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }
    
    public Produto getProduto(int id){
        String sql = "SELECT * FROM produtos WHERE ID = ?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            Produto p = new Produto();

            rs.first();
            p.setId(id);
            p.setNome(rs.getString("nome"));
            p.setPreco(rs.getFloat("preco"));
            p.setSaldo(rs.getInt("saldo"));
            return p;
            
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar: "+ex.getMessage());
            return null;
        }
    }
    
    public void inserir(Produto produto){
        try {
            String sql = "INSERT INTO produtos (nome, preco, saldo)" 
                    + "VALUES (?, ?, ?);";
            
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, produto.getNome());
            stmt.setFloat(2, produto.getPreco());
            stmt.setInt(3, produto.getSaldo());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao inserir: "+ex.getMessage());
        }
    }
    
    public List<Produto> getProdutos(){
        String sql = "SELECT * FROM produtos";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            
            ResultSet rs = stmt.executeQuery();
            List<Produto> listaProdutos = new ArrayList();
            
            while(rs.next()){
                Produto p = new Produto();
                p.setId(rs.getInt("id"));
                p.setNome(rs.getString("nome"));
                p.setPreco(rs.getFloat("preco"));
                p.setSaldo(rs.getInt("saldo"));
                listaProdutos.add(p);
            }
            return listaProdutos;
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar todos os produtos: "+ex.getMessage());
            return null;
        }
    }
}
