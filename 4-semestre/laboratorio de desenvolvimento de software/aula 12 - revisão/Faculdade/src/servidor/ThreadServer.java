/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package servidor;

import DAO.DisciplinaDAO;
import DAO.ProfessorDAO;
import beans.Professor;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

/**
 *
 * @author luiza
 */
public class ThreadServer extends Thread {
    private Socket clienteSocket;
    public ThreadServer(Socket clienteSocket) {
        this.clienteSocket = clienteSocket;
    }
    
    @Override
    public void run(){
        try {
            ObjectInputStream in = new ObjectInputStream(clienteSocket.getInputStream());
            ObjectOutputStream out = new ObjectOutputStream(clienteSocket.getOutputStream());
            int id = in.readInt();
            
            ProfessorDAO pDAO = new ProfessorDAO();
            Professor p = pDAO.getProfessorDisciplina(id);
            out.writeObject(p);

        } catch (IOException ex) {
            System.out.println("Erro ao lidar com o cliente");
            
        }
    }
}
