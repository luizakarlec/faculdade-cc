package revisao_logica;
import java.util.Scanner;

public class Multiplos {

    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);

        int n1, n2;

        System.out.print("Primeiro numero: ");
        n1 = teclado.nextInt();
        System.out.print("Segundo numero: ");
        n2 = teclado.nextInt();

        int resto;
        resto = n1 % n2;

        if(n1 > n2){
            if(resto == 0)
                System.out.println("Os numeros sao multiplos");
            else
                System.out.println("Os numeros nao sao multiplos");
        }else if(n2 > n1){
            resto = n2 % n1;
            if(resto == 0)
                System.out.println("Os numeros sao multiplos");
            else
                System.out.println("Os numeros nao sao multiplos");
        }else{
            System.out.println("Os numeros sao iguais, e multiplos");
        }

    }
    
}
