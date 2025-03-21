import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.*;

public class Email {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        String nomeCompleto;
        String vetorNome[];


        Map<String, String> dicionario = new HashMap<>();
        List<Map<String,String>> listaDeDicionario = new ArrayList<>();

        int continuar;
        do{
            //adicionar nomes
            do{
                System.out.print("Nome completo: ");
                nomeCompleto = teclado.nextLine().toUpperCase();
                vetorNome = nomeCompleto.split(" ");
            } while (vetorNome.length < 2);

            //gerar email
            String email = vetorNome[0] + "." + vetorNome[vetorNome.length - 1] + "@ufn.edu.br";
            email = email.toLowerCase();

            //verificar email repetido

            //adicionar no dicionario
            dicionario.put(email, nomeCompleto);

            //adicionar na lista
            listaDeDicionario.add(dicionario);


            System.out.print("Adicionar mais um nome? (0 - não | 1 - sim) ");
            continuar = teclado.nextInt();
        }while (continuar == 1);

        //exibir lista
        for(int i = 0; i < listaDeDicionario.size(); i++){
            System.out.println(listaDeDicionario.get(i));
        }

        teclado.close();
    }
}
