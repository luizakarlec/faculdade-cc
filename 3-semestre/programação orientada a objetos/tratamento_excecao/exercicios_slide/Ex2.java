package exercicios_slide;

import java.util.Scanner;

public class Ex2 {

	public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        double n1, n2;
        
        System.out.println("Realizar as quatro operações: ");
        try {
        	 System.out.print("Primeiro número: ");
             n1 = teclado.nextDouble();
             System.out.print("Segundo número: ");
             n2 = teclado.nextDouble();
        } catch(Exception e) {
        	System.out.println("Exceção: "+e.toString()+"\n");
        	n1 = 0;
        	n2 = 0;
        }

        teclado.nextLine();
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
            	try {
            		div = (n1 / n2);
            		System.out.println(n1+" / "+ n2 +" = "+ div);
            	} catch (Exception e) {
            		System.out.println("Exceção: "+e.toString()+"\n");
            	}
                break;
            default:
				System.out.println("INVALIDO!");
        }
        
        teclado.close();

	}

}
