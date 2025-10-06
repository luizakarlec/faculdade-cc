/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Categoria;
import beans.Produto;
import conexao.Conexao;
import java.sql.Connection;
import java.sql.*;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author luiza
 */
public class ProdutoDAO {
    private Conexao conexao;
    private Connection conn;
    
    public ProdutoDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }
    
    public Produto getProduto(int id){
        String sql = "SELECT * FROM produtos WHERE id = ?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            Produto p = new Produto();

            rs.first();
            
            p.setId(id);
            p.setNome(rs.getString("nome"));
            p.setPreco(rs.getFloat("preco"));
            p.setQuantidade(rs.getInt("quantidade"));
            
            CategoriaDAO cDAO = new CategoriaDAO();
            Categoria c = cDAO.getCategoria(rs.getInt("id_categoria"));
            
            p.setCategoriaId(c);
            
            return p;
            
        } catch (SQLException ex) {
            System.out.println("Erro: "+ex.getMessage());
            return null;
        }
    }
    
    public void inserir(Produto produto){
        try {
            String sql = "INSERT INTO produtos (nome, preco, quantidade, id_categoria)" 
                + "VALUES (?, ?, ?, ?);";
            
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, produto.getNome());
            stmt.setFloat(2, produto.getPreco());
            stmt.setInt(3, produto.getQuantidade());
            stmt.setInt(4, produto.getCategoriaId().getId());
            stmt.execute();
  
        } catch (SQLException ex) {
            System.out.println("Erro: "+ex.getMessage());
        }
    }
    
    public void editar(Produto produto){
        String sql = "UPDATE produtos set nome=?, preco=?, quantidade=?, id_categoria=? WHERE id=?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setString(1, produto.getNome());
            stmt.setFloat(2, produto.getPreco());
            stmt.setInt(3, produto.getQuantidade());
            stmt.setInt(4, produto.getCategoriaId().getId());
            stmt.setInt(5, produto.getId());

            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro: "+ex.getMessage());
        }
    }
    
    public void excluir (int id){
        try {
            String sql = "DELETE FROM produtos WHERE id=?";

            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setInt(1, id);
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro: "+ex.getMessage());
        }
    }
    
    public List<Produto> getProdutosFiltro(String nome, Categoria categoria){
        String sql = "SELECT * FROM produtos WHERE nome LIKE ? and id_categoria = ?";
        try{
            
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setString(1, "%"+ nome +"%");
            stmt.setInt(2, categoria.getId());
            ResultSet rs = stmt.executeQuery();
            List<Produto> listaProdutos = new ArrayList();
            
            CategoriaDAO cDAO = new CategoriaDAO();
            while(rs.next()){
                Produto p = new Produto();
                p.setId(rs.getInt("id"));
                p.setNome(rs.getString("nome"));
                p.setPreco(rs.getFloat("preco"));
                p.setQuantidade(rs.getInt("quantidade"));
                
                Categoria c = cDAO.getCategoria(rs.getInt("id_categoria"));
                p.setCategoriaId(c);
                
                listaProdutos.add(p);
            }
            return listaProdutos;
        } catch (SQLException ex) {
            System.out.println("Erro: "+ex.getMessage());
            return null;
        }
    }
}
