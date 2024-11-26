/*
Desenvolva um programa para ler o preço de um produto (em reais), a sua unidade (kilo, litro,
metro…) e a quantidade vendida. Desenvolva funções para: calcular o valor total a ser pago;
calcular o valor de desconto, conforme a seguinte regra:
◦ Se valor total for maior ou igual a R$ 1.000,00, o desconto é de 10%.
◦ Se o valor total for maior ou igual a R$ 500,00 e menor que R$ 1.000,00, o desconto é
de 8%.
◦ Se o valor total for maior ou igual a R$ 100,00 e menor que R$ 500,00, o desconto é de
5%.
◦ Para valor total menor que R$ 100,00, não haverá desconto.
 Ao término do programa, a função main deve mostrar o preço do produto, a unidade, a
quantidade vendida, o valor total, o valor do desconto (em % e em reais) e o valor a ser pago (valor
total – desconto). 
*/

#include <stdio.h>

void flush_in() {
	int ch;
	do {
		ch = fgetc(stdin);
	} while (ch != EOF && ch != '\n');
}

float calculototal(float p, float q) {
	return p * q;
}

float calculodesconto(float t) {
	if(t >= 1000) {
		return t * 0.10;
	} else if(t >= 500) {
		        return t * 0.08;
	        } else if(t >= 100) {
		            return t * 0.05;
                	} else {
                		return t * 0;
                	}
}

int main() {
	float produto;
	char unidade[50];
	float quantidade;
	float valortotal, desconto, valorfinal;

	printf("Preco do produto: ");
	scanf("%f", &produto);
	printf("Unidade(kilo, litro, metro...): ");
	scanf("%s", unidade);
	printf("Quantidade: ");
	flush_in();
	scanf("%f", &quantidade);
	valortotal = calculototal(produto, quantidade);
	desconto = calculodesconto(valortotal);
	valorfinal = valortotal - desconto;

	printf("\n****************\n\n");
	printf("Preco do produto: %.2f\n", produto);
	printf("Unidade: %s\n", unidade);
	printf("Quantidade vendida: %.2f\n", quantidade);
	printf("Valor total: %.2f\n", valortotal);
	printf("Valor do desconto: %.2f\n", desconto);
    	printf("Valor pago: %.2f\n", valorfinal);

	return 0;
}