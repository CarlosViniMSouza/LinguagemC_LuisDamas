/*
    Na linguagem C, existe uma função para inserir todas as funções que
serão utilizadas na execução do programa : main()

    E lembrando que C é uma linguagem 'Case Sensitive', ela diferencia
letras maiúsculas de minúsculas.

    Conheça o mais famoso programa de todos : Hello World
*/

#include <stdio.h> //inclui funções de input e exit

int main() //inicialização do programa
{ // o programa começa a receber instruções
    printf("Hello World \n"); //a instrução de printar a frase 'Hello World'
} // aqui o programa encerra o recebimento de instruções

// Problema n1 : Crie um programa cuja saída seja :
/*
    C
    is the greatest
    Language
*/
/*
// Solução :
#include <stdio.h>

int main()
{
    printf("C \n is the greatest \n Language");
}

    Lista de Caracteres Especiais :

    \7 : bell
    \a : bell
    \b : back-space
    \n : new-line
    \r : return 
    \t : tabulação horizontal
    \v : tabulação vertical
    \\ : caractere
    \' : aspas-simples
    \" : aspas
    \? : caracetere ?
    \ooo : ASCII Octal
    %% : caractere %
*/

// Isso é um comentário

/* Isso tambem é um comentário ! */

/* Exercício Resolvido (N1) : 
    Escreva um programa em C que tenha essa saída :

    1 -     Clientes
    2 -     Fornecedores
    3 -     Faturas

    0 -     Sair
*/

/*
// Solução (N1) :
#include <stdio.h>

main()
{
    printf("1 - \tClientes\n"); // o \t coloca uma tabulação
    printf("2 - \tFornecedores\n");
    printf("3 - \tFaturas\n\n"); // o segundo \n é para pular novamente de linha
    printf("0 - \tSair");
}
*/

/* Exercício Resolvido (N2) : 
    Escreva um programa em C que tenha essa saída :

    "Aqui vai um apito", ouvindo-se no final um bell.
*/

/*
// Solução (N2) :
#include <stdio.h>

main()
{
    printf("Aqui vai um apito \a \n"); // \a --> faz o som de 'beep' no final
}
 */
