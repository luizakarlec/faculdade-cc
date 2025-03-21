import java.util.Scanner;

public class Nomes {
    public static void main(String[] args) {
        String nomeCompleto;
        Scanner teclado = new Scanner(System.in);
        
        String vetorNome[];

        do{
            System.out.print("Nome completo: ");
            nomeCompleto = teclado.nextLine().toUpperCase();
            vetorNome = nomeCompleto.split(" ");
        } while (vetorNome.length < 2); 

        String email = vetorNome[0] + "." + vetorNome[vetorNome.length - 1] + "@ufn.edu.br";
        email = email.toLowerCase();
        System.out.println(email);

        // for (int i = 0; i < vetorNome.length; i++){
        //     System.out.println(vetorNome[i]);
        // }

        teclado.close();
    }
}
