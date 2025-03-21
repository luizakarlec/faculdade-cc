import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

class Aluno {
    int matricula;
    String nome;

    public Aluno(int matricula, String nome){
        this.matricula = matricula;;
        this.nome = nome;
    }

    @Override //metodo sobescrito 
    public String toString() {
        return "Aluno [matricula=" + matricula + ", nome=" + nome + "]";
    }
}

public class ListaObjeto {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        List<Aluno> alunos = new ArrayList<>();
        int matricula;
        String nome;
        Aluno tmp;

        for (int i = 0; i < 3; i++){
            System.out.print("Matricula: ");
            matricula = teclado.nextInt();
            teclado.nextLine();

            System.out.print("Nome: ");
            nome = teclado.nextLine();
            tmp = new Aluno(matricula, nome);

            alunos.add(tmp);
        }
        
        for (Aluno aluno : alunos){
            System.out.println(aluno);
        }
        teclado.close();
    }
}
