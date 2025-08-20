package pkg;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.FileReader;
import java.io.BufferedReader;

public class Arquivo {
	private FileReader arqr;
	private BufferedReader leitor;
	private List<String> lista;
	public String nomeArquivo;
	
	public Arquivo(String nomeArquivo) {
		this.nomeArquivo = nomeArquivo;
		lista = new ArrayList<>();
	}
	
	public List<String> leArquivo() {
		try {
			arqr = new FileReader (nomeArquivo+".txt");
			leitor = new BufferedReader(arqr);
			String linha;
			while((linha = leitor.readLine()) != null) {
				lista.add(linha);
			}
			leitor.close();
			arqr.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
		return lista;
	}
}
