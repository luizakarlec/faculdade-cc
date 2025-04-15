package principal;

import heranca_multipla.Quadrado;

public class PrincipalDesenho {

	public static void main(String[] args) {
		Quadrado q = new Quadrado(100, 200, "Quadrado Lindo");
		q.setNomeAutor("Luiza");
		q.ExibeDados();
	}

}
