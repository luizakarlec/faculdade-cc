/*
Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes
dados: sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo para ler as
informações coletadas e mostre as seguintes informações:
a) Média de idade dos habitantes.
b) Média de altura das mulheres.
c) Média de altura dos homens.
d) Maior idade dos habitantes.
e) Maior altura dos habitantes.
f) Percentual de pessoas com idade entre 18 e 35 anos (inclusive).
*/

#include <stdio.h>
#define N 1000

int main(){
    int i, sexo, idade;
    float altura;

    int contadorMulher = 0, contadorHomem = 0, contadorIdade = 0, contadorGeral = 0;
    float percentual;

    int somaIdade = 0, maiorIdade = 0;
    float mediaIdade, mediaAlturaM, somaAlturaM = 0, mediaAlturaH, somaAlturaH = 0, maiorAltura = 0;

    for(i = 1; i <= N; i++){
        printf("\nEntrada %i\n", i);
        printf("Informe o sexo (0-feminino, 1-masculino): ");
        scanf("%i", &sexo);
        printf("Informe a idade: ");
        scanf("%i", &idade);
        printf("Informe a altura: ");
        scanf("%f", &altura);

        somaIdade += idade;

        if(sexo == 0){
            contadorMulher++;
            somaAlturaM += altura;
        }else{
            contadorHomem++;
            somaAlturaH += altura;
        }

        if(idade > maiorIdade)
            maiorIdade = idade;
        if(altura > maiorAltura)
            maiorAltura = altura;

        if(idade >= 18 && idade <= 35)
            contadorIdade++;

        contadorGeral++;

    }   

    mediaIdade = (float) somaIdade / N;
    mediaAlturaM = (float) somaAlturaM / contadorMulher;
    mediaAlturaH = (float) somaAlturaH / contadorHomem;
    percentual = (100 * contadorIdade) / contadorGeral;


    printf("\n*****RESULTADOS*****\n");

    printf("\na) Media de idade dos habitantes: %.2f\n", mediaIdade);
    printf("b) Media de altura das mulheres: %.2f\n", mediaAlturaM);
    printf("c) Media de altura dos homens: %.2f\n", mediaAlturaH);
    printf("d) Maior idade dos habitantes: %i\n", maiorIdade);
    printf("e) Maior altura dos habitantes: %.2f\n", maiorAltura);
    printf("f) Percentual de pessoas com idade entre 18 e 35 anos (inclusive): %.2f%%", percentual); 


    return 0;
}
