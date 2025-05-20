package interface2;

public class Smartphone implements Celular, PC{
	String tel;
	String email;
	
	public Smartphone(String tel, String email) {
		super();
		this.tel = tel;
		this.email = email;
	}

	@Override
	public void verificaEmail() {
		System.out.println("Verificando e-mails");
		
	}

	@Override
	public void realizarChamada() {
		System.out.println("Realizando chamada");
		
	}
}
