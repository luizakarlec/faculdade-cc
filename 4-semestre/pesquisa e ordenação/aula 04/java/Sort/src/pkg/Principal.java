package pkg;

import java.util.List;
import java.util.Random;
import java.util.ArrayList;

public class Principal {

    public static void main(String[] args) {
    	long tempoInicio, tempoFim;
    	
        List<Integer> listaBolha = new ArrayList<>();
        popularLista(listaBolha, 500, 1, 1000, true);
        List<Integer> listaSelecao = new ArrayList<>();
        popularLista(listaSelecao, 500, 1, 1000, true);
        List<Integer> listaInsercao = new ArrayList<>();
        popularLista(listaInsercao, 500, 1, 1000, true);
        
        System.out.println("BOLHA:");
        tempoInicio = System.nanoTime();
        bolha(listaBolha);
        tempoFim = System.nanoTime();
        System.out.println("Tempo (ms): " + (tempoFim - tempoInicio)/1000000 + "\n");
        
        System.out.println("SELECAO:");
        tempoInicio = System.nanoTime();
        selecao(listaSelecao);
        tempoFim = System.nanoTime();
        System.out.println("Tempo (ms): " + (tempoFim - tempoInicio)/1000000 + "\n");
        
        System.out.println("INSERCAO:");
        tempoInicio = System.nanoTime();
        insercao(listaInsercao);
        tempoFim = System.nanoTime();
        System.out.println("Tempo (ms): " + (tempoFim - tempoInicio)/1000000 + "\n");
    }
    
    public static void popularLista(List<Integer> lista, long quantidadeNumeros, int inicio, int fim, boolean aleatorio) {
    	Random gerador = new Random();
    	if (aleatorio) {
    		for (long i = 0; i < quantidadeNumeros; i++) {
    			lista.add( gerador.nextInt(inicio, fim) );
    		}
    	}
    	if (!aleatorio) {
    		for (long i = inicio; i < quantidadeNumeros; i++) {
    			lista.add((int)i);
    		}
    	}
    }
    
    public static void bolha(List<Integer> lista) {  
        boolean houveTroca;  
        int tmp;  
        int qtdComparacoes = 0, qtdTrocas = 0;

        do {  
            houveTroca = false;  
            for (int i = 0; i < lista.size() - 1; i++) {  
                qtdComparacoes++;  
                if (lista.get(i) > lista.get(i + 1)) {  
                    qtdTrocas++;  
                    houveTroca = true;  
                    tmp = lista.get(i);  
                    lista.set(i, lista.get(i + 1));  
                    lista.set(i + 1, tmp);  
                }  
            }  
        } while (houveTroca);  

        System.out.println("Comparações: " + qtdComparacoes);
        System.out.println("Trocas: " + qtdTrocas);
    } 
    
    public static void selecao(List<Integer>lista){
    	int posMenor;
    	int qtdComparacoes = 0, qtdTrocas=0;
    	for(int i=0; i< lista.size()-1; i++){
    		posMenor = i;
    	    for(int j = i+1; j< lista.size(); j++){
    	    	qtdComparacoes ++;
    	    	if(lista.get(j)<lista.get(posMenor)){
    	    		posMenor = j;
    	    	}
    	    }
    	    if(i != posMenor){
    	    	qtdTrocas++;
    	    	Integer tmp = lista.get(i);
    	    	lista.set(i, lista.get(posMenor));
    	    	lista.set(posMenor,tmp);
    	    }  
    	}
    	System.out.println("Comparações: " + qtdComparacoes);
        System.out.println("Trocas: " + qtdTrocas);
    }
    
    public static void insercao(List<Integer> lista) {
        int i, j;
        int tmp;
        int qtdComparacoes = 0, qtdTrocas = 0;

        for (i = 1; i < lista.size(); i++) {
            tmp = lista.get(i);
            for (j = i - 1; j >= 0; j--) {
                qtdComparacoes++;
                if (tmp < lista.get(j)) {
                    lista.set(j + 1, lista.get(j)); // desloca
                    qtdTrocas++;
                } else {
                    break;
                }
            }
            lista.set(j + 1, tmp); // insere no lugar certo
        }

        System.out.println("Comparações: " + qtdComparacoes);
        System.out.println("Trocas/Deslocamentos: " + qtdTrocas);
    }
}
