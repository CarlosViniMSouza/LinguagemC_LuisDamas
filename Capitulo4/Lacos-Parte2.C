/*
    for() :

    o laço 'for', é o tipo de estrutura condicional que executa diversas funções ao mesmo
tempo, e com uma sintaxe peculiar (Confira abaixo) :

    for (<carga-incial>; <condição>; <pós-intrução>) {
        <instrução>;
    }

    Vamos exemplificar cada parte do laço for :

    1 -> em <cargas-iniciais>, nós inserimos as variaveis que serão aplicadas no laço, e 
essa parte do código é executada uma vez;
    2 -> se a <condição> avaliada retorna TRUE, o código executará a <instrução>, que são
os comandos esperados para serem executadas em uma quantidade de vezes;
    3 -> depois de executada, a execução vai no <pós-instrução> para realizar a próxima
iteração do laço (incremento ou decremento das variaveis);
    Vejamos seu funcionamento :

    PROBLEMA RESOLVIDO (N1) :

    Crie um programa que retorne a soma e o produto de N numeros inteiros !
*/

#include <stdio.h>

int N, Num, soma, produto;
main() {
    printf("Digite um número inteiro : ");
    scanf("%d", &N);
    for(soma = 0, produto = 1; N <= Num; N = N+1)
    {
        soma = soma + N;
        produto = produto * N;
    }
    printf("a soma e o produto de %d eh : %d e %d", N, soma, produto);
}