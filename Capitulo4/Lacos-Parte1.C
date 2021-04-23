/*
    Na programação, entendemos laços como 'estrutura ordenada a executar uma determinada
instrução enquanto a condição imposta for verdadeira (ou falsa, tambem tem essa 
possibilidade)'. Dentre as quais temos : 'for', 'while' e 'do ... while' !

    Vamos explorar um pouco á respeito de cada uma delas :

    while() :

    Em resumo é : enquanto a condição for verdadeira, a instrução será executada, a partir
do momento em que a condição deixa de ser verdadeira, a instrução é encerrada !

    Siga o exemplo abaixo :

    PROBLEMA RESOLVIDO (N1) : Crie um programa que escreva os 10 primeiros numeros inteiros
*/

#include <stdio.h>

int seq = 1;
main() {
    while(seq < 10){
        printf("%d", seq);
        seq = seq + 1;
    }
}