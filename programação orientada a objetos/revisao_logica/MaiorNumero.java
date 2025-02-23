package revisao_logica;
import java.util.Scanner;

public class MaiorNumero {

    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);

        int a, b, c;

        System.out.print("a = ");
        a = teclado.nextInt();
        System.out.print("b = ");
        b = teclado.nextInt();
        System.out.print("c = ");
        c = teclado.nextInt();

        //verifica maior numero
        if(a > b && a > c)
            System.out.println(a+" eh o maior numero");
        else if(b > a && b > c)
            System.out.println(b+" eh o maior numero");
        else if(c > a && c > b)
            System.out.println(c+" eh o maior numero");
        else
            System.out.println("Nao existe um unico maior numero");

        //mostra em ordem crescente
        int temp;
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        if(a > c){
            temp = a;
            a = c;
            c = temp;
        }
        if(b > c){
            temp = b;
            b = c;
            c = temp;
        }

        System.out.println("Ordem crescente: "+ a +", "+ b +", "+ c);

    }
    
}
