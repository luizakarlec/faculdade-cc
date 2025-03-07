/*
1) baseado no codigo anterior (lista de Integer), construir um programa em Java que receba, via teclado do usuario, n nomes de pessoas. 
Assim como no primeiro codigo: i) não podera haver nomes duplicados; ii) ao final do cadastro a lista deverá ser ordenada;
iii) o código deve permitir que o usuário digite um nome para pesquisa e o programa exclua esse nome da lista;
iv) exiba novamente a lista.
obs: em java, como colocar em maiusculo um nome antes de armazena-lo na lista.

Tarefa:
    - diferença em java de Vector, ArrayList e LinkedList.
    - Construir exemplos;
*/

import java.util.Scanner;
import java.util.ArrayList;

public class exercicio {
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        ArrayList<String> lista = new ArrayList<>();

        //inserir nomes
        int continuar = 1;
        String nome;

        do {
            System.out.print("Nome: ");
            nome = teclado.nextLine().toUpperCase();
            
            if (!lista.contains(nome)) {
                lista.add(nome);
            } else {
                System.out.println("Nome já cadastrado");
            }

            System.out.print("Deseja continuar? (1 = Sim, 0 = Não) ");
            continuar = teclado.nextInt();
            teclado.nextLine();

        } while (continuar == 1);

        //ordenar
        lista.sort(null);

        //exibir
        System.out.println("\nExibindo por objetos..");
        System.out.println("Lista contem " + lista.size() + " nomes");
        for (String i : lista){
            System.out.println(i);
        }

        //remover um nome
        String nomeRemover;
        System.out.print("\nEscolha um nome para remover: ");
        nomeRemover = teclado.nextLine().toUpperCase();

        if (lista.remove(nomeRemover))
            System.out.println("Nome localizado e excluido");
        else
            System.out.println("Nome não localizado");

        //exibir
        System.out.println("\nExibindo por objetos..");
        System.out.println("Lista contem " + lista.size() + " nomes"); //arrumar
        for (String i : lista){
            System.out.println(i);
        }




    }
}
