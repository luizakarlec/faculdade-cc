# Lista de exercicios

### 1) Explique os seguintes conceitos de POO em Java:

- Classe: Uma estrutura que abstrai um conjunto de objetos com características similares. A classe descreve as características e funcionalidades dos objetos. Representa um **conjunto de objetos**.
  
- Objeto: O objeto é a **instância de uma classe**. É possível ter vários objetos a partir de uma classe.

- Atributo: **Variáveis** na linguagem estruturada. **Características do objeto**.

- Método: **Funções** na linguagem estruturada. **Funcionalidades do objeto**.

- Encapsulamento: É o **empacotamento** dos atributos e métodos de uma classe. Podendo ser publico, privado e protegido.

> O estado de um objeto é representado por seus atributos  
> O comportamento é representado pelos seus métodos

### 2) Qual a diferença entre método e construtor em uma classe? Dê um exemplo.
O construtor é um dos métodos da classe que é utilizado para inicializar uma classe. Quando nenhum construtor esta explicito o compilador fornece automáticamente um construtor vazio.
Método ex: Get() e Set()
Método Construtor: public Carro();

### 3) O que são modificadores de acesso em Java? Cite e explique brevemente os principais.
Eles controlam a visibilidade e acessibilidade das classes, métodos e atributos.
Public torna visivel em qualquer lugar.
Private torna visivel apenas na mesma classe.
Protected torna visivel apenas no mesmo pacote.

### 4) Qual a diferença entre os tipos de dados String, int e boolean? Dê um exemplo de uso de cada um.
String representa uma palavra um frase. ex: String nome.
int representa um número inteiro. ex: int idade.
boolean representa apenas verdadeiro ou falso (0 ou 1). ex: bool alugado.

### 5) Explique o que é e para que serve o método toString() em uma classe.
O método toString() é usado na saída de dados, retorna uma representação em string do objeto.

### 6) Descreva o que acontece quando se tenta acessar um atributo privado diretamente fora da classe. Como é possível acessá-lo de forma correta?
Não vai funcionar. Para acessá-lo é preciso usar os métodos get e set.
