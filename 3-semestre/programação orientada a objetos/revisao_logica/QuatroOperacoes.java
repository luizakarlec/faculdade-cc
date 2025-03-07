package revisao_logica;
import java.util.Scanner;

public class QuatroOperacoes {

    public static void main(String args[]) {

        double n1, n2;
        Scanner teclado = new Scanner(System.in);

        System.out.println("Realizar as quatro operações: ");
        System.out.print("Primeiro número: ");
        n1 = teclado.nextDouble();
        System.out.print("Segundo número: ");
        n2 = teclado.nextDouble();

        System.out.println("Escolha uma opcao: ");
        System.out.println("1 - adição");
        System.out.println("2 - subtração");
        System.out.println("3 - multiplicação");
        System.out.println("4 - divisão");
        System.out.print("Opcao = ");
        int opcao = teclado.nextInt();

        double add, sub, multi, div;

        switch (opcao) {
            case 1:
                add = n1 + n2;
                System.out.println(n1+" + "+ n2 +" = "+ add);
                break;
            case 2:
                sub = n1 - n2;
                System.out.println(n1+" - "+ n2 +" = "+ sub);
                break;
            case 3:
                multi = n1 * n2;
                System.out.println(n1+" * "+ n2 +" = "+ multi);
                break;
            case 4:
                div = n1 / n2;
                System.out.println(n1+" / "+ n2 +" = "+ div);
                break;
            default:
				System.out.println("INVALIDO!");
        }
       
        teclado.close();
    }
    
}
