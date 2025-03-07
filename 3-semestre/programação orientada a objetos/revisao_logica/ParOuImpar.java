package revisao_logica;
import java.util.Scanner;

public class ParOuImpar {
    
    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);

        int numero;

        System.out.print("Digite um numero: ");
        numero = teclado.nextInt();

        int resto;
        resto = numero % 2;

        if(resto == 0)
            System.out.println("O numero eh par!");
        else 
            System.out.println("O numero eh impar!");

        teclado.close();
    }
}
