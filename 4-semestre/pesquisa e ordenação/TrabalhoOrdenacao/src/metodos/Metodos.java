/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package metodos;

import java.util.List;

/**
 *
 * @author laboratorio
 */
public class Metodos {
    public static int[] bolha(List<Integer> lista) {  
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
        
        return new int[]{qtdComparacoes, qtdTrocas};
    } 
    
    public static int[] selecao(List<Integer>lista){
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
    	return new int[]{qtdComparacoes, qtdTrocas};
    }
    
    public static int[] insercao(List<Integer> lista) {
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

        return new int[]{qtdComparacoes, qtdTrocas};
    }
    
    public static int[] agitacao(List<Integer> lista) {
        boolean houveTroca;
        int tmp;
        int ini = 0;
        int fim = lista.size();
        int qtdComparacoes = 0, qtdTrocas = 0;

        do {
            houveTroca = false;
            for (int i = ini; i < fim-1; i++){
                qtdComparacoes++;
                if (lista.get(i) > lista.get(i+1)) {
                    qtdTrocas++;
                    houveTroca = true;
                    tmp = lista.get(i);
                    lista.set(i, lista.get(i+1));
                    lista.set(i+1, tmp);
                }
            }

            if (!houveTroca) {
                break;
            }
            fim--;

            houveTroca = false;
            for (int i = fim; i > ini+1; i--){
                qtdComparacoes++;
                if (lista.get(i) < lista.get(i-1)) {
                    qtdTrocas++;
                    houveTroca = true;
                    tmp = lista.get(i);
                    lista.set(i, lista.get(i-1));
                    lista.set(i-1, tmp);
                }
            }
            ini++;

        } while (houveTroca);
        
        return new int[]{qtdComparacoes, qtdTrocas};
    }
    
    public static int[] pente(List<Integer> lista) {
        boolean houveTroca;
        int tmp = 0;
        int distancia = lista.size();
        int qtdComparacoes = 0, qtdTrocas = 0;

        do {
            distancia = (int) (distancia / 1.3);
            if (distancia < 1) {
                distancia = 1;
            }
            houveTroca = false;
            for (int i = 0; i+distancia < lista.size(); i++){
                qtdComparacoes++;
                if (lista.get(i) > lista.get(i+distancia)) {
                    qtdTrocas++;
                    houveTroca = true;
                    lista.set(i, lista.get(i));
                    lista.set(i, lista.get(i+distancia));
                    lista.set(i+distancia, tmp);
                }
            }
        } while (houveTroca || distancia > 1);
        
        return new int[]{qtdComparacoes, qtdTrocas};
    }
    
    public static int[] shell(List<Integer> lista) {
        int i, j;
        int tmp;
        int qtdComparacoes = 0, qtdTrocas = 0;
        int distancia = 1;
        int n = lista.size();

        int referenciaTamanho = 3;

        do {
            distancia = referenciaTamanho * distancia + 1;
        } while (distancia < n);

        do {
            distancia = (int)(distancia / referenciaTamanho);

            for (i = distancia; i < n; i++) {
                tmp = lista.get(i);
                for (j = i - distancia; j >= 0; j = j - distancia) {
                    qtdComparacoes++;
                    if (tmp < lista.get(j)) {
                        lista.set(j + distancia, j);
                        qtdTrocas++;
                    } else break;
                }
                lista.set(j + distancia, tmp);
                qtdTrocas++;
            }
        } while (distancia > 1);
        
        return new int[]{qtdComparacoes, qtdTrocas};
    }
    
    static int comparacoes = 0, trocas = 0;
    public static int particionaQuick(List<Integer>lista, int ini, int fim){
        int pivo = lista.get(ini);
        int i = ini+1;
        int j = fim;
        
        while(i <= j){
            // da esquerda para direita
            while(i<=fim && lista.get(i)<=pivo){
                comparacoes++;
                i++;
            }
            //da direita para esquerda
            while(j>ini && lista.get(j)>pivo){
                comparacoes++;
                j--;
            }
            
            if (i<j){
                trocas++;
                int tmp = lista.get(i);
                lista.set(i, lista.get(j));
                lista.set(j, tmp);
            }
        }
        trocas++;
        int tmp = lista.get(ini);
        lista.set(ini, lista.get(j));
        lista.set(j, tmp);    
        return j;
    }
 
    public static int[] quick(List<Integer>lista, int ini, int fim){
        if (ini<fim){
            int pivo = particionaQuick(lista, ini, fim); 
            quick(lista, ini, pivo - 1);
            quick(lista, pivo + 1, fim);
        }
        return new int[]{comparacoes, trocas};        
    }
    
    public static int[] heap(List<Integer> lista) {
        int tmp;
        int qtdComparacoes = 0, qtdTrocas = 0;
        int fe, fd;
        int n = lista.size();
        boolean houveTrocas;
        while (n > 1){
            houveTrocas = false;
            for (int i = 0; i*2+1 < n; i++) {
                fe = i*2+1;
                fd = i*2+2;
                qtdComparacoes++;
                
                if ( lista.get(i) < lista.get(fe) ){ //comparando o raiz com seu filho da esquerda
                    tmp = lista.get(i);
                    lista.set(i, lista.get(fe));
                    lista.set(fe, tmp);
                    qtdTrocas++;
                    houveTrocas = true;
                }
                if (fd < n) { //só vamos comparar o filho da direita se ele existir
                    qtdComparacoes++;
                    if ( lista.get(i) < lista.get(fd) ){ //comparando o raiz com seu filho da direita
                        tmp = lista.get(i);
                        lista.set(i, lista.get(fd));
                        lista.set(fd, tmp);
                        qtdTrocas++;
                        houveTrocas = true;
                    }
                }
            }
            
            if (!houveTrocas) {
                tmp = lista.get(0);
                lista.set(0, lista.get(n-1));
                lista.set(n-1, tmp);
                qtdTrocas++;
                n--;
            }
        }
        return new int[]{qtdComparacoes, qtdTrocas};        
    }
    
    static int comparacoesMerge = 0, trocasMerge = 0;
    public static int[] merge(List<Integer> lista, int ini, int fim) {
        if (ini < fim) {
            int meio = (ini + fim) / 2;
            merge(lista, ini, meio);
            merge(lista, meio + 1, fim);
            intercala(lista, ini, meio, fim);
        }
        return new int[]{comparacoesMerge, trocasMerge};
    }

    private static void intercala(List<Integer> lista, int ini, int meio, int fim) {
        List<Integer> aux = new java.util.ArrayList<>();

        int i = ini;
        int j = meio + 1;

        while (i <= meio && j <= fim) {
            comparacoesMerge++;
            if (lista.get(i) <= lista.get(j)) {
                aux.add(lista.get(i));
                i++;
            } else {
                aux.add(lista.get(j));
                j++;
            }
            trocasMerge++;
        }

        // copia o que sobrou da metade esquerda
        while (i <= meio) {
            aux.add(lista.get(i));
            i++;
            trocasMerge++;
        }

        // copia o que sobrou da metade direita
        while (j <= fim) {
            aux.add(lista.get(j));
            j++;
            trocasMerge++;
        }

        // retorna os valores mesclados pra lista original
        for (int k = 0; k < aux.size(); k++) {
            lista.set(ini + k, aux.get(k));
        }
    }

}
