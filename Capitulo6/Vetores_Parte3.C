/*
    Matrizes e Vetores Multidimensionais :

    NOTA (N1) : Não existe limite para o num. de dimensoes que 1 vetor pode conter;

    A declaração de um 'Vetor Multidimensional' se dá da seguinte forma:

        <type> <vetor> [dim1] [dim2] [...] [dim(n)];

    NOTA (N2) : No C, um vetor de 2 ou mains dimensão não é uma 'Matriz', mas um 'Vetor de vetores'.

    Para entendermos melhor essa "coisa", vamos destrinchar um vetor de 2 dimensões:

        int vector[5][3];

        {
            vector --------->  é um vetor com 5 elementos (e cada elemento é um vetor de 3 inteiros)
            vector[5] ----->  é um vetor de 3 inteiros
            vector[5][3] ->  é o inteiro que está disposto na posição 5,3 do vetor 'vector' 
        }

    Podemos declarar seu valor inicial no programa. Veja 2 exemplos:

    char word[4] = { '', '', '', '' };      // meio que um: char word[4] = {0};

    int vector[5][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15} };
        // temos aqui um vetor de 5 linhas e 3 colunas -> por isso temos 5 {} 3 elementos cada.

    NOTA (N3) : No proximo caitulo (Strings), abordaremos vetores de outra forma; 

*/