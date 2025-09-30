/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DAO;

import beans.Disciplina;
import conexao.Conexao;
import java.sql.Connection;
import java.sql.*;

/**
 *
 * @author laboratorio
 */
public class DisciplinaDAO {
    private Conexao conexao;
    private Connection conn;
    
    public DisciplinaDAO(){
        this.conexao = new Conexao();
        this.conn = this.conexao.getConexao();
    }
    
    public void inserir(Disciplina disciplina){
        String sql = "INSERT INTO disciplina (nome, carga_horaria, id_professor) VALUES (?, ?, ?);";
        try {
            PreparedStatement stmt = this.conn.prepareStatement(sql);
            stmt.setString(1, disciplina.getNome());
            stmt.setInt(2, disciplina.getCargaHoraria());
            stmt.setInt(3, disciplina.getProfessorid().getId());
            stmt.execute();
  
        } catch (SQLException ex) {
            System.out.println("Erro ao inserir disciplina: "+ex.getMessage());
        }
    }
}
