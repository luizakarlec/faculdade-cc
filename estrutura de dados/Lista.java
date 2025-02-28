import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;

public class Lista {
    public static void main(String[] args) { //psvm
        //código que popula uma lista com n números aleatórios inteiros
        ArrayList<Integer> lista = new ArrayList<>();

        Random gerador = new Random();
        int tamanho = gerador.nextInt(10, 20);
        int numero;

        //inserir
        for (int i = 0; i < tamanho; i++){
            numero = gerador.nextInt(1000);
            lista.add(numero);
        }
        //exibir
        System.out.println("Exibindo por indices..");
        for(int i = 0; i < lista.size(); i ++){
            System.out.println(lista.get(i));
        }

        System.out.println("Exibindo por objetos..");
        for (Integer i : lista){
            System.out.println(i);
        }

        System.out.println("Lista de inteiros usando Iterator:");
        Iterator <Integer> iterator = lista.iterator();
        while (iterator.hasNext()) {
            numero = iterator.next();
            System.out.println(numero);
        }
    }

}
