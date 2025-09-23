/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Pessoa;
import beans.Veiculo;
import conexao.Conexao;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import java.sql.*;

/**
 *
 * @author laboratorio
 */
public class VeiculoDAO {
    private Conexao conexao;
    private Connection conn;
    
    public VeiculoDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }
    
    public void inserir(Veiculo veiculo){
        String sql = "INSERT INTO veiculo (modelo, placa, id_pessoa) VALUES (?, ?, ?);";
        try {
            
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, veiculo.getModelo());
            stmt.setString(2, veiculo.getPlaca());
            stmt.setInt(3, veiculo.getPessoaid().getId());
            stmt.execute();
  
        } catch (SQLException ex) {
            System.out.println("Erro ao inserir veículo: "+ex.getMessage());
        }
    }
    
    public void editar(Veiculo veiculo){
        String sql = "UPDATE veiculo set modelo=?, placa=?, id_pessoa=? WHERE id=?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setString(1, veiculo.getModelo());
            stmt.setString(2, veiculo.getPlaca());
            stmt.setInt(3, veiculo.getPessoaid().getId());
            stmt.setInt(4, veiculo.getId());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao atualizar veículo: "+ex.getMessage());
        }
    }
    
    public void excluir (int id){
        try {
            String sql = "DELETE FROM veiculo WHERE id=?";

            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setInt(1, id);
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao excluir veículo: "+ex.getMessage());
        }
    }
    
    public List<Veiculo> getVeiculos(){
        String sql = "SELECT * FROM VEICULO";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql);
            
            ResultSet rs = stmt.executeQuery();
            List<Veiculo> listaVeiculos = new ArrayList();
            
            while(rs.next()){
                Veiculo v = new Veiculo();
                v.setId(rs.getInt("id"));
                v.setModelo(rs.getString("modelo"));
                v.setPlaca(rs.getString("placa"));
                
                int idPessoa = rs.getInt("id_pessoa");
                PessoaDAO pDAO = new PessoaDAO();
                Pessoa p = pDAO.getPessoa(idPessoa);
                v.setPessoaid(p);
                
                listaVeiculos.add(v);
            }
            return listaVeiculos;
        } catch (SQLException ex) {
            System.out.println("Erro ao consultar todas as pessoas: "+ex.getMessage());
            return null;
        }
    }
}