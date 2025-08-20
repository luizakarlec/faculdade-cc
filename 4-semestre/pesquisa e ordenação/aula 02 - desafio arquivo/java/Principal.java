package pkg;

import java.util.ArrayList;
import java.util.List;

public class Principal {
	public static void main(String[] args) {
		List<String> lista = new ArrayList<>();
		Arquivo arquivo = new Arquivo("numeros");
		lista = arquivo.leArquivo();
		
		System.out.println("Lista de numeros:");
		for(String l : lista) {
			System.out.println(l);
		}
		
		List<String> lista2 = new ArrayList<>();
		Arquivo arquivo2 = new Arquivo("palavras");
		lista2 = arquivo2.leArquivo();
		
		System.out.println("\nLista de palavras:");
		for(String l : lista2) {
			System.out.println(l);
		}
	}
}
