package pkg;

public class Disciplina {

	public static void main(String[] args) {
		Laboratorio lab = new Laboratorio();
		Professor p = new Professor();
		
		lab.local = "311";
		p.nome = "Ricardo";
		
		System.out.println("O nome do professor é: "+p.nome);
		System.out.println("A local da aula é: "+lab.local);

	}

}
