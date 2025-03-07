package revisao_logica;
import java.util.Scanner;

public class SituacaoEleitor {

    public static void main(String args[]) {
        
        Scanner teclado = new Scanner(System.in);

        int idade;

        System.out.print("Digite sua idade: ");
        idade = teclado.nextInt();

        if (idade < 16)
            System.out.println("Nao esta apto para votar");
        else if (idade >= 16 && idade < 18)
            System.out.println("Voto facultativo");
        else if (idade > 70)
            System.out.println("Voto facultativo");
        else
            System.out.println("Voto obrigatorio");

        teclado.close();
    }
    
}
