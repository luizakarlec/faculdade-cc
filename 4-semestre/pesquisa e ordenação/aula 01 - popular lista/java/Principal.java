package ordenacao;

import java.util.ArrayList;

public class Principal {
    public static void main(String[] args) {
        ArrayList<Integer> listaNumeros = new ArrayList<>();
        ArrayList<Integer> lista2Numeros = new ArrayList<>();
        ArrayList<String> listaPalavras = new ArrayList<>();
        
        Util.popularAleatorioNumeros(listaNumeros, 10, 100, 500);
        Util.exibirListaNumeros(listaNumeros);
        
        lista2Numeros.addAll(listaNumeros);
        
        Util.popularAleatorioPalavras(listaPalavras, 10, 5);
        Util.exibirListaPalavras(listaPalavras);
    }
}
