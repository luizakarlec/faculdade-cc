/*
Gerar n valores aleatorios de glicemia aleatorios entre 50 e 240
a) aplicar a media
b) aplicar a mediana
    - ordenar
    - capturar o valor do meio
c) aplicar a moda
*/

using System.Net.Mime;

List<int> listaGlicemia = new List<int>();
Random random = new Random();

//popular lista
int quantidade = random.Next(1000);
for (int i = 0; i < quantidade; i++) //por indice
{
    listaGlicemia.Add(random.Next(50, 240));
}

//exibir lista
listaGlicemia.Sort();
foreach (int i in listaGlicemia) //por objeto
{
    Console.WriteLine(i);
}


//media
double soma = 0, media;
for (int i = 0; i < quantidade; i++) //por indice
{
    soma += listaGlicemia[i];
}
media = soma / quantidade;
Console.WriteLine("MEDIA = " + media);

//mediana
double mediana;

if (quantidade %2 == 0)
{
    int meio1 = quantidade / 2;
    int meio2 = (quantidade / 2) + 1;
    mediana = listaGlicemia[(meio1 + meio2) / 2];
} else
{
    int meio = quantidade / 2;
    mediana = listaGlicemia[meio];
}
Console.WriteLine("MEDIANA = " + mediana);

//moda (mostra apenas uma)
int valorAvaliado;
int ocorrenciasAvaliado;
int moda = 0;
int ocorrenciasModa = 0;
foreach (var i in listaGlicemia)
{
    valorAvaliado = i;
    ocorrenciasAvaliado = 0;
    foreach (var j in listaGlicemia)
    {
        if (valorAvaliado == j)
        {
            ocorrenciasAvaliado++;
        }
    }
    if (ocorrenciasAvaliado > ocorrenciasModa)
    {
        moda = valorAvaliado;
        ocorrenciasModa = ocorrenciasAvaliado;
    }
}
Console.WriteLine("MODA = " + moda + " aparece " + ocorrenciasModa + " vezes");
