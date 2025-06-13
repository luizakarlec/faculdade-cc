import java.util.Random;
import java.util.Scanner;
import java.util.TreeSet;
 
public class Arvore {
    public static void main(String[] args) {
        TreeSet<Integer> arvore = new TreeSet<>();
        Random gerador = new Random();
        int numero;
        for (int i = 0; i < 10; i++) {
            numero = gerador.nextInt(100);
            System.out.println("Inserindo o " + numero);
            arvore.add(numero);
        }
 
        System.out.println("Total de elementos: " + arvore.size());
        System.out.println(arvore);
 
        // arvore.clear();
        // System.out.println("vazia..." + arvore);
       
        Scanner teclado = new Scanner(System.in);
        System.out.print("Digite numero para pesquisa: ");
        numero = teclado.nextInt();
 
        System.out.println("Localizado? " + arvore.contains(numero));
        System.out.println("Localizado? " + arvore.ceiling(numero));
 
        arvore.remove(numero);
        System.out.println("Total de elementos apos remocao: " + arvore.size());
        System.out.println(arvore);
    }
}
