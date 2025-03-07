package revisao_logica;
import java.util.Scanner;

public class Media {

    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);

        int a, b, c, d;
        double media;

        System.out.print("a = ");
        a = teclado.nextInt();
        System.out.print("b = ");
        b = teclado.nextInt();
        System.out.print("c = ");
        c = teclado.nextInt();
        System.out.print("d = ");
        d = teclado.nextInt();

        media = (a + b + c + d) / 4;

        System.out.println("Media = "+media);
        System.out.println("Numeros acima da media: ");
        if(a > media)
            System.out.println(a);
        if(b > media)
            System.out.println(b);
        if(c > media)
            System.out.println(c);
        if(d > media)
            System.out.println(d);

        teclado.close();
    }

}
