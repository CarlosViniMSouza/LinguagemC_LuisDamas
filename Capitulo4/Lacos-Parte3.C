/*
    do ... while()

    Aqui, o testa de condição é realizado no fim da instrução do laço.
    Com isso, a instrução é executada uma vez (enquanto que no while() e for() a
instrução pode ser ignorada na primeira tentativa de execução)

    Sua sintaxe é basicamente :

    do
        <instrução1>
    while (<condição>);
    <instrução2>

    Seu funcionamento divide-se em 4 passos:

    1 -> A <instrução1> é executada;
    2 -> A condição é avaliada;
    3 -> Se o resultado da <condição1> retorna True, volta-se ao ponto 1;
    4 -> Caso contrário, o laço termina e o programa retorna a <instrução2>;

    Vejamos um exemplo :

    PROBLEMA RESOLVIDO (N1) : Crie um programa que mostre os 10 primeiros nums pares
*/

#include <stdio.h>

main(){
    int pares = 1;
    do
    {
        pares = 1*2;
        printf("%d", &pares);
    } while (pares <= 10);
    
}

// na parte4 veremos laços especiais !