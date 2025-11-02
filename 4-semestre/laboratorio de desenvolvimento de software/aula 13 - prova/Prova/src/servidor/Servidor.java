/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package servidor;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

/**
 *
 * @author laboratorio
 */
public class Servidor {
    public void iniciarServidor(){
           int porta = 12345;
        try(ServerSocket servidorSocket = new ServerSocket(porta)){
            System.out.println("Servidor aguardando conexão de porta");
            while(true){
                try{
                    Socket clienteSocket = servidorSocket.accept();
                    System.out.println("Conexão aceita de "+clienteSocket.getInetAddress());
                    
                    Thread threadCliente = new ThreadServer(clienteSocket);
                    threadCliente.start();
                   
                }catch(IOException ex){
                    System.out.println("Erro ao aceitar conexão do cliente");
                }
            }
        }catch(IOException e){
            System.out.println("Erro ao criar o servidorSocket");
        }
    }
}
