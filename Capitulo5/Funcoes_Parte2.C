/*
    O Corpo de uma função :

    (assim que a internet estabilizar eu cuidarei desse trecho)

    NOTA (N1) : O cabeçalho de uma função NUNCA deve ser seguida de ';'

    NOTA (N2) : Funções NUNCA deve ser definidas dentro de outras funções !

    Funções que Retornam Resultados :

    para uma função retorna algum resultado/valor quando solicitada, deve se usar
uma palavra-chave denominada 'return' !

    NOTA (N3) : Depois do 'return', pode-se usar qualquer expressão válida em C.

    Vejamos como isso tudo funciona no problema resolvido abaixo :

    PROBLEMA RESOLVIDO (N1) : Crie um programa que, receba 2 numeros do usuario,
e que devolvam 2 valores : a soma de ambos e o dobro de cada um (Usando Funções)!

*/

#include <stdio.h>

int somatorio(float num1, float num2){
    return num1 + num2;
}

int dobrarNum(float num1, float num2){
    return num1 * 2;
    return num2 * 2;
}

main(){
    float num1, num2;

    printf("Digite 2 números distintos - separados por <space> : ");
    scanf("%f %f", &num1, &num2);
    printf("O somatorio eh : ", somatorio(num1, num2));
    printf("O dobro de cada numero eh : ", dobrarNum(num1, num2));
}