# Modelagem 
elencar/identificar/destacar requisitos (estruturais e funcionais)  
Conceitual -> Lógica -> Física  

### Modelagem conceitual (diagrama ER):
- identificar entidades -> tabelas  
- identificar atributos -> variaveis/colunas  
      - identificadores -> chaves primarias -> primary key  
      - ordinarios -> não são identificadores  
- identificar relacionamentos  
      - associação  
      - herança  
      - dependência  
- identificar cardinalidade -> quantidade de um elemento de uma tabela que se relaciona  com elementos de outra tabela  
      - FUNDAMENTAL para definir as chaves estrangeiras - foreing key  
      - tipos:  
            - 1..1  
            - 1..n  
            - n..n  

### Modelagem lógica
- transformação de entidades em tabelas  
- definição de chaves estrangeiras a partir das cardinalidades  
      - 1..1 -> a chave estrangeira pode estar em qualquer uma das entidades  
      - 1..n -> a chave estrangeira vai para o laMdo da entidade que tem o n  
      - n..n -> cria-se uma terceira tabela onde as chaves primárias das duas tabelas vão se unir/juntar na tabela criada  

### Modelagem física
  - tipos dos atributos
  - restrições:
    - atributos
    - cardinalidade
    - duplicidade - automática ao se definir uma chave primária
    - dependência - chave estrangeira
      - delete on: cascade ou restrict 
