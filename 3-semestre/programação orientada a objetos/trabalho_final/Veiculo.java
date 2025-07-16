package pkg;

public class Veiculo {
	private String placa;
	private String modelo;
	private String marca;
	private int anoFabricacao;
	private double quilometragem;
	
	public Veiculo(String placa, String modelo, String marca, int anoFabricacao, double quilometragem) {
		super();
		this.placa = placa;
		this.modelo = modelo;
		this.marca = marca;
		this.anoFabricacao = anoFabricacao;
		this.quilometragem = quilometragem;
	}
	
	public String getPlaca() {
		return placa;
	}
	public String getModelo() {
		return modelo;
	}
	public String getMarca() {
		return marca;
	}
	public int getAnoFabricacao() {
		return anoFabricacao;
	}
	public double getQuilometragem() {
		return quilometragem;
	}
	public void setQuilometragem(double quilometragem) {
		this.quilometragem = quilometragem;
	}
	
}
