package ordenacao;

import java.util.ArrayList;
import java.util.Random;

/***
 * classe responsável por métodos de gestão de listas de números inteiros e listas de palavras
 * @author luiza
 */
public class Util {
    /***
     * método estático que popula uma lista de números inteiros com valores aleatórios
     * @param lista estrutura de armazenamento dos números
     * @param quantidade de números a serem gerados
     * @param inicio valor inicial da extensão do número gerado
     * @param fim valor final da extensão do número gerado
     */
    public static void popularAleatorioNumeros(ArrayList<Integer> lista, long quantidade, int inicio, int fim){
        Random gerador = new Random();
        for (; quantidade > 0; quantidade--){
            lista.add(gerador.nextInt(inicio, fim));
        }
    }
    
    /***
     * método estático que gera palavras aleatórias
     * @param lista armazena as palavras geradas
     * @param quantidade de palavras a serem geradas
     * @param tamanho das palavras a serem geradas
     */
    public static void popularAleatorioPalavras(ArrayList<String> lista, long quantidade, int tamanho){
        String letras = "abcdefghijklmnopqrstuvwxyz ";
        Random gerador = new Random();
        
        for(; quantidade > 0; quantidade--){
            String palavraGerada = "";
            char letraSorteada;

            for (int i = 0; i < tamanho; i++){
                letraSorteada = letras.charAt(gerador.nextInt(letras.length()));
                palavraGerada = palavraGerada + letraSorteada;
            }
            
            lista.add(palavraGerada);
        }
    }
    
    /***
     * método estático que exibe uma lista de números inteiros
     * @param lista contendo números inteiros
     */
    public static void exibirListaNumeros(ArrayList<Integer> lista){
        for (Integer item : lista){
            System.out.println(item);
        }
    }
     /***
      * método estático que exibe uma lista de palavras
      * @param lista contendo palavras
      */
    public static void exibirListaPalavras(ArrayList<String> lista){
        for(String item : lista){
            System.out.println(item);
        }
    }
}
