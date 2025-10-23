/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package arquivo;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.File;

/**
 *
 * @author laboratorio
 */
public class Arquivo {
    private FileWriter arqw;
    private BufferedWriter escritor;
    private FileReader arqr;
    private BufferedReader leitor;
    private List<Integer> lista; // lista desordenada
    public String nomeArquivo;
    
    /*
    public void gravaArquivo(List<Veiculo> lista) {
        try {
                arqw = new FileWriter(nomeArquivo+".txt");
                escritor = new BufferedWriter(arqw);
                for(Veiculo v : lista) {
                        escritor.write(v.getPlaca()+";"+v.getModelo()+";"+v.getMarca()+";"+v.getAnoFabricacao()+";"+v.getQuilometragem());
                        escritor.newLine();
                }
                escritor.close();
                arqw.close();
                System.out.println("Arquivos salvos com sucesso no .txt");
        } catch (IOException e) {
                e.printStackTrace();
        }
    }
    */

    public static void leArquivo(ArrayList<Integer> lista, File caminho) {
        try (BufferedReader br = new BufferedReader(new FileReader(caminho))) {
            String linha;
            while((linha = br.readLine()) != null) {
                try {
                    lista.add(Integer.parseInt(linha.trim()));
                } catch (NumberFormatException e) {
                    System.out.println("Linha inválida ignorada: " + linha);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
