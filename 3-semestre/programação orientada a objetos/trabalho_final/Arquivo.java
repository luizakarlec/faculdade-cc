package pkg;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.BufferedReader;

public class Arquivo {
	private FileWriter arqw;
	private BufferedWriter escritor;
	private FileReader arqr;
	private BufferedReader leitor;
	private List<Veiculo> listaVeiculos;
	public String nomeArquivo;
	
	public Arquivo(String nomeArquivo) {
		this.nomeArquivo = nomeArquivo;
		listaVeiculos = new ArrayList<>();
	}

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
	
	public List<Veiculo> leArquivo() {
		System.out.println("Veiculos lidos do arquivo");
		try {
			arqr = new FileReader (nomeArquivo+".txt");
			leitor = new BufferedReader(arqr);
			String linha;
			while((linha = leitor.readLine()) != null) {
				String[] campo = linha.split(";");
				String placa = campo[0];
				String modelo = campo[1];
				String marca = campo[2];
				int anoFabricacao = Integer.parseInt(campo[3]);
				double quilometragem = Double.parseDouble(campo[4]);
				Veiculo vei = new Veiculo(placa, modelo, marca, anoFabricacao, quilometragem);
				listaVeiculos.add(vei);
			}
			leitor.close();
			arqr.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
		return listaVeiculos;
	}
}
