/*
    Introdução :

    Como já vimos os 4 tipos básicos da vetores, agora veremos uma forma de processar dados de mesmo tipo;

    Um Vetor (Array), nada mais é do que um conglomerado de dados encadeados em sequência;

    Como exemplo, temos o jogo da velha:

           -------------
          | x |   | O |
          -------------
         |   | x |   |
         -------------
        | O |   | x |
        -------------

    Declaração de Vetores :

    Pode ser feita da seguinte maneira: <tipo> <Nome_da_Variavel>[n° de elementos]

    Um exemplo mais prático : float salario[10]       //aqui, a variavel 'salario' contém 20 numeros decimais;

    Um vetor pode ser representado da seguinte maneira:

    int vetor[4]  //abaixo sua representação :

     ----------------------------------------------
    |         |           |           |           |
    ----------------------------------------------
    vetor[0]   vetor[1]    vetor[2]    vetor[3]

    Carga Inicial dos Vetores :

    É possível iniciar automaticamente todos os elementos de um vetor da seguinte forma :

    <tipo> <Nome_da_Variavel>[n] = { valor(0), valor(1), valor(2), ... , valor(n)};

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

*/  