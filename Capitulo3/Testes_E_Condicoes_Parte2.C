/*
    Operadores Lógicos :

    Além dos Operadores Relacionais, temos esta categoria para melhor orientar nosso
programa a fazer as escolhas mais acertivas (melhorando a questão da 'condicionalidade').
    Isso é, quando não temos que avaliar uma 'única variável em questão' (em resumo, quando 
queremos correlacionais diversas escolhas e usar poucas linhas de código para resolver o problema).
    Temos como operadores lógicos :

    Operador        Significado            Exemplo
       &&           AND ( E...)         x>=1 && x<=19
       ||           OR ( OU...)         x==1 || x==3
        !           NOT (Negação)        ! Continuar

    Vejamos 2 exemplos (um retornando TRUE e outro retornando FALSE) :

    ° 1 -> (A terra é redonda)(C) && (O Homem é mamífero)(C) = TRUE
    ° 2 -> (A terra é plana)(E) && (O Homem é mamífero)(C) = FALSE

    [Siginificado : (C)-> Certo | (E)-> Errado]

    NOTA (N1) : Basta apenas uma expressão estar (E) que o resultado final é FALSE !!

    Então, para melhorar o entendimento, vejamos um resumo abaixo :

------------------------------------------------------------------------------------------
    Operador        Significado            Resultado
       &&           x>=1 && x<=19           TRUE : se ambas as condições forem verdadeiras.
                                            FALSE : caso uma ou mais sejam falsas.
------------------------------------------------------------------------------------------
       ||           x==1 || x==3            TRUE : se qualquer condição for verdadeira.
                                            FALSE : se todas forem falsas.
------------------------------------------------------------------------------------------
        !           ! Continuar             TRUE : caso a condição seja mentira.
                                            FALSE : se a condição for verdadeira
------------------------------------------------------------------------------------------

    PROBLEMA RESOLVIDO (N1) : Crie um programa que fará a seguinte taxação :
    10% -> solteiros
    5% -> casados
*/

#include <stdio.h>

char estado_civil;
float salario, taxa;
main() {
    printf("estado civil (C)~casado | (S)~solteiro : ");
    printf("Seu salário é (R$) : ");
    scanf("%c %f", &estado_civil, &salario);
    if (estado_civil=='C' || estado_civil=='c'){
        taxa = salario * 0.05;
        printf("Você pagará %f de imposto", &taxa);
    } else if (estado_civil=='S' || estado_civil=='s'){
        taxa = salario * 0.1;
        printf("Você pagará %f de imposto", &taxa);
    } else {
        printf("Estado Civil não aceito, tente novamente !");
    }
}

/*
    Precedência dos Operadores Lógicos e Relacionais :

    A Linguagem C dá prioridade há algumas operações lógico/relacionais.
    Veja a tabela abaixo :

    ^     Operador
    |   <  <=  >  >=
    |       == !=
    |       &&
    |       ||
    |        ?

    (A seta apontando pra cima) tem como finalidade mostrar que, quanto mais acima está
o operador, maior é a sua prioridade(preferência) para ser executado no programa !

    NOTA (N2) : Em C, '&&' tem maior precedência que '||' !

    Operador Condicional '?'

    Além de ser o único operador ternário, ele aguarda 3 argumentos em sua sintaxe :

        'condição ? expressão1 : expressão2'

    Seu funcionamento se dá pela seguinte forma :
    ° 1 -> A condição é avaliada;
    ° 2 -> Se for TRUE, o resultado virá da expressão1;
    ° 3 -> Caso contrário, virá da expressão2;

    PROBLEMA RESOLVIDO (N2) : Crie um programa que calcule os aumentos de ordenado para o 
corrente ano. Se o ordenado for x > 1000 deve ser aumentado em 5%, se não, aumentado para 7%
*/

#include <stdio.h>

float salario;
main(){
    printf("Seu salário é : ");
    scanf("%f", &salario);
    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
    printf("Seu salario novo será de : %.2f", &salario);
    // esse '%.2f' é para delimitar em 2 casas(vai até 2@ casa - dezena)
}

// Na parte 3 vamos explorar o switch() ! E alguns exercícios.