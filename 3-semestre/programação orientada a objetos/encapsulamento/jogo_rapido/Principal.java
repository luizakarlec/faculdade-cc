package jogo_rapido;

public class Principal {

	public static void main(String[] args) {
		
		Aluno a = new Aluno();
		a.setNome("Luiza");
		a.setNota1(10);
		a.setNota2(7);
		
		System.out.println("aluno(a) "+a.getNome()+" possui notas "+a.getNota1()+" e "+a.getNota2());
		System.out.println("media: "+a.calcularMedia());	
	}
}
