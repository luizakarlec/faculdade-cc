package revisao_logica;
import java.util.Scanner;

public class PlanoCartesiano {

    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);

        int x, y;

        System.out.println("Digite uma cordenada (x,y):");
        System.out.print("x = ");
        x = teclado.nextInt();
        System.out.print("y = ");
        y = teclado.nextInt();

        if (x == 0 && y == 0)
            System.out.println("O ponto esta na origem");
        else if(x == 0)
            System.out.println("O ponto esta no eixo X");
        else if(y == 0)
            System.out.println("O ponto esta no eixo Y");
        else if(x > 0 && y > 0)
            System.out.println("O ponto esta no primeiro quadrante");
        else if(x < 0 && y > 0)
            System.out.println("O ponto esta no segundo quadrante");
        else if (x < 0 && y < 0)
            System.out.println("O ponto esta no terceiro quadrante");
        else 
            System.out.println("O ponto esta no quarto quadrantes");


        teclado.close();
    }
    
}
