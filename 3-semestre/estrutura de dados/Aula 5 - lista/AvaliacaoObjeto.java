import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Aluno {
    String nome;
    String email;

    public Aluno(String nome, String email){
        this.nome = nome;
        this.email = email;
    }
}

public class EmailObjeto {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        List<Aluno> alunos = new ArrayList<>();
        Aluno tmp;
        String nomeCompleto;
        String vetorNome[];

        int x = 1;
        int continuar;

        System.out.println("CRIAR EMAIL:");
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
            int emailExistente = 0;
            for (Aluno aluno : alunos) {
                if (aluno.email.equals(email)) {
                    emailExistente = 1;
                }
            }
            if (emailExistente == 1) {
                email = vetorNome[0] + "." + vetorNome[vetorNome.length - 1] + x +"@ufn.edu.br";
                email = email.toLowerCase();
                x++;
            } 
            System.out.println("E-mail criado: " + email);

            //adicionar lista
            tmp = new Aluno(nomeCompleto, email);
            alunos.add(tmp);

            System.out.print("Adicionar mais um nome? (0 - não | 1 - sim) ");
            continuar = teclado.nextInt();
            teclado.nextLine();

        }while (continuar == 1);

        //exibir lista
        System.out.println("\nLISTA EMAILS:");
        for (Aluno a : alunos){
            System.out.println(a.nome +" - "+ a.email);
        }

        teclado.close();
    }
}
