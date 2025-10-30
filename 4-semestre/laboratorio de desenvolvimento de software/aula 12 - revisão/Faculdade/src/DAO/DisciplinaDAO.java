/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Disciplina;
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
public class DisciplinaDAO {
    private Conexao conexao;
    private Connection conn;
    
    public DisciplinaDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }
    
     public Disciplina getDisciplina(int id){
        String sql = "SELECT * FROM disciplinas WHERE id = ?";
        
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setInt(1, id);
            ResultSet rs = stmt.executeQuery();
            Disciplina d = new Disciplina();
            rs.first();
            d.setId(id);
            d.setNome(rs.getString("nome"));
            d.setCargaHoraria(rs.getInt("carga_horaria"));
            ProfessorDAO pDAO = new ProfessorDAO();
            Professor p = pDAO.getProfessor(rs.getInt("professor_id"));
            d.setProfessorId(p);
            return d;
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar: "+ex.getMessage());
            return null;
        }
    }
     
    public void inserir(Disciplina disciplina){
        String sql = "INSERT INTO disciplinas (nome, carga_horaria, professor_id) VALUES (?, ?, ?);";
        try {
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, disciplina.getNome());
            stmt.setInt(2, disciplina.getCargaHoraria());
            stmt.setInt(3, disciplina.getProfessorId().getId());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao inserir: "+ex.getMessage());
        }
    }
    
    public void editar(Disciplina disciplina){
        String sql = "UPDATE disciplinas set nome=?, carga_horaria=?, professor_id=? WHERE id=?"; 
        try{
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setString(1, disciplina.getNome());
            stmt.setInt(2, disciplina.getCargaHoraria());
            stmt.setInt(3, disciplina.getProfessorId().getId());
            stmt.setInt(4, disciplina.getId());
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao editar: "+ex.getMessage());
        }
    }
    
    public void excluir(int id){
        String sql = "DELETE FROM disciplinas WHERE id=?";
        try {
            PreparedStatement stmt = conn.prepareStatement(sql);
            stmt.setInt(1, id);
            stmt.execute();
        } catch (SQLException ex) {
            System.out.println("Erro ao excluir: "+ex.getMessage());
        }
    }
    
    /*
    public List<Disciplina> getDisciplina(){
        String sql = "SELECT * FROM disciplinas";
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
            System.out.println("Erro ao consultar todas os veiculos: "+ex.getMessage());
            return null;
        }
    }
    */
    
    public List<Disciplina> getDisciplinasNome(String nome){
        String sql = "SELECT * FROM disciplinas WHERE nome LIKE ?";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setString(1, "%"+ nome +"%");
            ResultSet rs = stmt.executeQuery();
            List<Disciplina> listaDisciplinas = new ArrayList();
            
            while(rs.next()){
                Disciplina d = new Disciplina();
                d.setId(rs.getInt("id"));
                d.setNome(rs.getString("nome"));
                d.setCargaHoraria(rs.getInt("carga_horaria"));
                
                int idProfessor = rs.getInt("professor_id");
                ProfessorDAO pDAO = new ProfessorDAO();
                Professor p = pDAO.getProfessor(idProfessor);
                d.setProfessorId(p);
                
                listaDisciplinas.add(d);
            }
            return listaDisciplinas;
        } catch (SQLException ex) {
            System.out.println("Erro ao consultar disciplinas: "+ex.getMessage());
            return null;
        }
    }
    
    public List<Disciplina> getDisciplinasNomeProf(String nome, Professor professor){
        String sql = "SELECT * FROM disciplinas WHERE nome LIKE ? and professor_id LIKE ?";
        try{
            PreparedStatement stmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
            stmt.setString(1, "%"+ nome +"%");
            stmt.setString(2, "%"+ professor.getId() +"%");
            ResultSet rs = stmt.executeQuery();
            List<Disciplina> listaDisciplinas = new ArrayList();
            
            while(rs.next()){
                Disciplina d = new Disciplina();
                d.setId(rs.getInt("id"));
                d.setNome(rs.getString("nome"));
                d.setCargaHoraria(rs.getInt("carga_horaria"));
                
                int idProfessor = rs.getInt("professor_id");
                ProfessorDAO pDAO = new ProfessorDAO();
                Professor p = pDAO.getProfessor(idProfessor);
                d.setProfessorId(p);
                
                listaDisciplinas.add(d);
            }
            return listaDisciplinas;
        } catch (SQLException ex) {
            System.out.println("Erro ao consultar disciplinas: "+ex.getMessage());
            return null;
        }
    }
}
