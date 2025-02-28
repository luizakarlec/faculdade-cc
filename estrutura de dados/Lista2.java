import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;

public class Lista2 {
    public static void main(String[] args) { //psvm
        //código que popula uma lista com n números aleatórios inteiros
        ArrayList<Integer> lista = new ArrayList<>();

        Random gerador = new Random();
        int tamanho = gerador.nextInt(10, 20);
        int numero;

        //inserir
        for (int i = 0; i < tamanho; i++){
            numero = gerador.nextInt(1000);
            if (!lista.contains(numero))
                lista.add(numero);
        }
        //ordenar
        lista.sort(null);
        
        //exibir
        System.out.println("Exibindo por objetos..");
        System.out.println("Total de " + lista.size() );
        for (Integer i : lista){
            System.out.println(i);
        }

        //remover um numero
        if (lista.remove((Integer)15))
            System.out.println("Numero localizado e excluido");
        else
            System.out.println("Numero não localizado");

        //percorrer via indice
        for (int i = 0; i < lista.size(); i++){
            if (lista.get(i) % 2 != 0) {
                lista.set(i, -1);
            }
        }

        //exibir
        System.out.println("Exibindo por objetos..");
        System.out.println("Total de " + lista.size() );
        for (Integer i : lista){
            System.out.println(i);
        }        
    }
}
