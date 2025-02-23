package revisao_logica;
import java.util.Scanner;

public class Odometro {
    
    public static void main(String args[]) {

        Scanner teclado = new Scanner(System.in);
        double odoInicio, odoFinal, litrosGastos, valorTotal;

        System.out.print("Odometro inicial: ");
        odoInicio = teclado.nextDouble();
        System.out.print("Odometro final: ");
        odoFinal = teclado.nextDouble();
        System.out.print("Litros gastos: ");
        litrosGastos = teclado.nextDouble();
        System.out.print("Valor total recebido: ");
        valorTotal = teclado.nextDouble();

        double kms, mediaConsumo, lucro;
        kms = odoFinal - odoInicio;
        mediaConsumo = kms / litrosGastos;
        lucro = valorTotal - (litrosGastos * 4.90);

        System.out.println("Media de consumo: "+mediaConsumo);
        System.out.println("Lucro liquido: "+lucro);


    }
}
