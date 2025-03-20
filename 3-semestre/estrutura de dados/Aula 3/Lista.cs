List<int> lista = new List<int>();
Random gerador = new Random();

//gerar e popular uma lista com n números alatorios inteiros
int quantidade = gerador.Next(10,20);
for (int i = 0; i < quantidade; i++)
{
    lista.Add(gerador.Next(1000));
}

//ordenar
lista.Sort();

//exibir

/*
//indice
for (int i = 0; i < lista.Count; i++)
{
    Console.WriteLine(lista[i]);
}

//objeto
foreach (int i in lista)
{
    Console.WriteLine(i);
}
*/

//iterador
var item = lista.GetEnumerator(); //var = variable (recebe qualquer tipo)
while (item.MoveNext())
{
    int numero = item.Current;
    Console.WriteLine(numero);
}
