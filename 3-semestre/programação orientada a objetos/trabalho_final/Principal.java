package pkg;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		List<Veiculo> listaVeiculos = new ArrayList<Veiculo>();
		Arquivo arquivo = new Arquivo("Veiculos");
		listaVeiculos = arquivo.leArquivo();
		
		int op = 0;
		do {
			System.out.println("\n** MENU **");
			System.out.println("1 - Cadastrar veículo");
			System.out.println("2 - Alterar quilometragem do veículo");
			System.out.println("3 - Excluir veículo pelo número da placa");
			System.out.println("4 - Sair do sistema");
			System.out.print("Opção: ");
			op = teclado.nextInt();
			teclado.nextLine();
			
			if(op == 1) {
				System.out.println("\n* CADASTRAR VEÍCULO *");
				System.out.print("Digite a placa do veículo: ");
				String placa = teclado.nextLine();
				System.out.print("Digite o modelo do veículo: ");
				String modelo = teclado.nextLine();
				System.out.print("Digite a marca do veículo: ");
				String marca = teclado.nextLine();
				System.out.print("Digite o ano de fabricação do veículo: ");
				int anoFabricacao = teclado.nextInt();
				System.out.print("Digite a quilometragem do veículo: ");
				double quilometragem = teclado.nextDouble();
				
				Veiculo v = new Veiculo(placa, modelo, marca, anoFabricacao, quilometragem);
				listaVeiculos.add(v);
				arquivo.gravaArquivo(listaVeiculos);
				
			} else if (op == 2) {
				System.out.println("\n* ALTERAR QUILOMETRAGEM DO VEICULO *");
				System.out.print("Digite a placa do veículo que deseja alterar: ");
				String placaAlterar = teclado.nextLine();
				
				int flag = 0;
				for(Veiculo v : listaVeiculos) {
					if(v.getPlaca().equals(placaAlterar)) {
						System.out.print("Digite a nova quilometragem: ");
						double novaQuilometragem = teclado.nextDouble();
						v.setQuilometragem(novaQuilometragem);
						arquivo.gravaArquivo(listaVeiculos);
						flag = 1;
					} 
				}
				if(flag == 0) {
					System.out.println("Veiculo não encontrado");
				}
				
			} else if (op == 3) {
				System.out.println("\n* EXCLUIR VEICULO PELO NÚMERO DA PLACA *");
				System.out.print("Digite a placa do veículo que deseja excluir: ");
				String placaExcluir = teclado.nextLine();
				
				int flag = 0;
				for(Veiculo v : listaVeiculos) {
					if(v.getPlaca().equalsIgnoreCase(placaExcluir)) {
						listaVeiculos.remove(v);
						arquivo.gravaArquivo(listaVeiculos);
						flag = 1;
					} 
				}
				if(flag == 0) {
					System.out.println("Veiculo não encontrado");
				}
				
			} else if (op == 4) {
				System.out.println("Saindo do sistema...");
			} else {
				System.out.println("Opção inválida! Tente novamente.");
			}
			
		}while(op != 4);

		teclado.close();
	}

}
