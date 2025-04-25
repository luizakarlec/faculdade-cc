import java.util.LinkedList;
import java.util.Queue;
import java.util.Random;

public class Principal {
/***
 * MÉTODO ESTATICO OU DE CLASSE RESPONSÁVEL POR GERAR PROCESSOS ALEATORIOS ENTRE 1 A 1000
 * DISTRIBUINDO EM DUAS FILAS:
 * @param filaPrioritaria - FILA PRIORITÁRIA (NÚMEROS ABAIXO DE 500)
 * @param filaNormal - FILA NORMAL (NÚMEROS ACIMA DE 500)
 * @param quantidadeProcessos
 */
	public static void gerarProcessosEmFilas(Queue<Processo> filaPrioritaria,Queue<Processo> filaNormal, int quantidadeProcessos ) {
		Random gerador = new Random();
		int numeroProcessoGerado;
		
		//ROTINA PARA GERAR 10000 PROCESSOS ENTRE 1 E 1000
		for(int i=0;i<quantidadeProcessos;i++) {
			numeroProcessoGerado = gerador.nextInt(0, 1001);
			
			switch (numeroProcessoGerado) {
			case 0:
				//ROTINA PARA RETIRAR DA FILA PRIORITARIA
				System.out.println("ATENDENDO: "+filaPrioritaria.poll()); //poll = remove
				break;
				
			case 500:
				//ROTINA PARA RETIRAR DA FILA NORMAL
				System.out.println("ATENDENDO: "+filaNormal.poll()); //poll = remove

				break;

			default:
				//ROTINA PARA INSERIR PROCESSO NA FILA PRIORITÁRIA
				if(numeroProcessoGerado<500) {
					Processo processoTmp = new Processo(numeroProcessoGerado,"processo de alta prioritaria");
					if(!filaPrioritaria.contains(processoTmp)) { //PARA EVITAR A REPETIÇÃO
						filaPrioritaria.offer(processoTmp); // = filaPrioritaria.add(processoTmp);
						System.out.println(processoTmp); // VAI EXIBIR O toString DA CLASSE PROCESSO
					}
				
				}else {	//ROTINA PARA INSERIR PROCESSO NA FILA NORMAL
					Processo processoTmp = new Processo(numeroProcessoGerado,"processo normal");
					if(!filaNormal.contains(processoTmp)) { //PARA EVITAR A REPETIÇÃO
						filaNormal.offer(processoTmp); // = filaNormal.add(processoTmp);
						System.out.println(processoTmp); // VAI EXIBIR O toString DA CLASSE PROCESSO
					}
					
				}
				break;
			}
		}
	
	}
	/***
	 * METODO ESTATICO QUE EXIBE MOSTRA PROCESSOS EXISTENTES EM FILA
	 * 
	 * @param fila - CONTEM UMA FILA NORMAL OU PRIORITARIA
	 * @param frase - TEXTO A SER EXIBIDO NO CABEÇALHO DA EXIBIÇÃO OU LISTAGEM
	 */
	public static void exibirProcessosNaoAtendio(Queue<Processo> fila, String frase) {
		System.out.println(frase);
		System.out.println("TOTAL de processos não atendidos: "+ fila.size());
		
		for(Processo processo: fila) {
			System.out.println(processo);
		}
	}
	
	public static void main(String[] args) {
		/* uso do java docs
		Processo novo = new Processo(100,"teste");
		novo.umExemplo(5, "ola");*/
		
		//FILA DE PRIORIDADE
		Queue<Processo>filaPrioritaria = new LinkedList<>();
		//FILA NORMAL
		Queue<Processo>filaNormal = new LinkedList<>();
		 
		gerarProcessosEmFilas(filaPrioritaria,filaNormal,1000);
		exibirProcessosNaoAtendio(filaPrioritaria,"Fila prioritaria");
		exibirProcessosNaoAtendio(filaNormal,"Fila normla");
	
	}

}

