/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conexao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author luiza
 */
public class Conexao {
    public Connection getConexao(){
        try {
            Connection conn = DriverManager.getConnection(
                "jdbc:mysql://localhost:3306/escola?useSSL=false&serverTimezone=UTC&allowPublicKeyRetrieval=true",
                "root",
                "laboratorio"
            );
            System.out.println("Conexao efetuada!");
            return conn;
        } catch (SQLException ex) {
            System.out.println("Erro ao conectar BD: "+ex.getMessage());
            return null;
        }
    }
}
