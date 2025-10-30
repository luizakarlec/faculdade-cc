/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Professor;
import conexao.Conexao;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author luiza
 */
public class ProfessorDAO {
    private Conexao conexao;
    private Connection conn;
    
    public ProfessorDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }

    public Professor getProfessor(int id){
        String sql = "SELECT * FROM professores WHERE ID = ?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            Professor p = new Professor();

            rs.first();
            p.setId(id);
            p.setNome(rs.getString("nome"));
            p.setEmail(rs.getString("email"));
            return p;
            
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar: "+ex.getMessage());
            return null;
        }
    }
    
    public void inserir(Professor professor){
        try {
            String sql = "INSERT INTO professores (nome, email)" 
                    + "VALUES (?, ?);";
            
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, professor.getNome());
            stmt.setString(2, professor.getEmail());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao inserir: "+ex.getMessage());
        }
    }
    
    public void editar(Professor professor){
        String sql = "UPDATE professores set nome=?, email=? WHERE id=?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setString(1, professor.getNome());
            stmt.setString(2, professor.getEmail());
            stmt.setInt(3, professor.getId());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao editar: "+ex.getMessage());
        }
    }
    
    public void excluir (int id){
        try {
            String sql = "DELETE FROM professores WHERE id=?";

            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setInt(1, id);
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao excluir: "+ex.getMessage());
        }
    }
    
    public List<Professor> getProfessores(){
        String sql = "SELECT * FROM professores";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            
            ResultSet rs = stmt.executeQuery();
            List<Professor> listaProfessores = new ArrayList();
            
            while(rs.next()){
                Professor p = new Professor();
                p.setId(rs.getInt("id"));
                p.setNome(rs.getString("nome"));
                p.setEmail(rs.getString("email"));
                listaProfessores.add(p);
            }
            return listaProfessores;
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar todos os professores: "+ex.getMessage());
            return null;
        }
    }
    
    public List<Professor> getProfessoresNome(String nome){
        String sql = "SELECT * FROM professores WHERE nome LIKE ?";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setString(1, "%"+ nome +"%");
            ResultSet rs = stmt.executeQuery();
            List<Professor> listaProfessores = new ArrayList();
            
            while(rs.next()){
                Professor p = new Professor();
                p.setId(rs.getInt("id"));
                p.setNome(rs.getString("nome"));
                p.setEmail(rs.getString("email"));
                listaProfessores.add(p);
            }
            return listaProfessores;
        } catch (SQLException ex) {
            System.out.println("Erro ao consultar professores: "+ex.getMessage());
            return null;
        }
    }
    
    public Professor getProfessorDisciplina(int id){
        String sql = "SELECT * "
                    + "FROM disciplinas "
                    + "INNER JOIN professores "
                    + "ON disciplinas.professor_id = professores.id "
                    + "WHERE disciplinas.id = ?";
        
        try {
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            Professor p = new Professor();
            rs.first();
            p.setId(rs.getInt("id"));
            p.setNome(rs.getString("nome"));
            p.setEmail(rs.getString("email"));
            return p;
        } catch (SQLException ex) {
            System.out.println("Erro ao consultar professor da disciplina: "+ex.getMessage());
            return null;
        }
    }
}
