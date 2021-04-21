/*
    Switch() :

    É um método utilizado em casos de decisões complexas (quando se faria necessário o uso
de muitos 'if/else' - geralmente, quando exitem 3 ou mais decisões a serem escolhidas).
    Tem uma sintaxe simples de ser feita :

    switch(<expressão>){
        case N1 : <intrução1>;
        case N2 : <intrução2>;
        case N3 : <intrução3>
                (...)
        case N(n) : <intrução(n)>;
        default : [instruções];
    }

    NOTA (N1) : Em cada case, só pode haver 1 (int/char/long int) presente na avaliação.

    EXEMPLO RESOLVIDO (N1) : Crie um programa que retorne o Estado Civil da pessoa.
    (C -> Casado; D -> Divorciado; V -> Viúvo; S -> Solteiro)
*/

#include <stdio.h>

char est_civil;
main()
{
    printf("Digite uma letra para representar seu Estado Civil : ");
    scanf("%c", &est_civil);
    switch(est_civil){
        case 'C' : printf("Casado !");
            break;
        case 'D' : printf("Divorciado !");
            break;
        case 'V' : printf("Viúvo !");
            break;
        case 'S' : printf("Solteiro !");
            break;
        default : printf("Ocorreu algum erro !");
    }
}

/*
    Comando 'break' :

    Esse comando permite a finalização da execução do programa. Uma vez que a instrução foi feita, 
a execuçao é interrompida. 
*/

/*
    Vejamos a resolção de 3 exercícios relacionados ao capítulo 3 :

    EXERCÍCIO (N1) : Escreva um programa que identifica se um determinado número é :

    -> Positivo;
    -> Negativo;
    -> Igual a 0;
*/

#include <stdio.h>

int number;
main()
{
    printf("Digite qualquer inteiro : ");
    scanf("%d", &number);
    if( number > 0 ) {
        printf("Temos um número positivo");
    } else if ( number < 0 ) {
        printf("Temos um número negativo");
    } else {
        printf("Esse número é 0");
    }
}

/*
    EXERCÍCIO (N2) : Reescreva o programa anteiror, só que, usando switch() : 
*/

#include <stdio.h>

int number;
main()
{
    printf("Digite qualquer inteiro : ");
    scanf("%d", &number);

    switch(number){

        case 'number > 0' : printf("Temos um número positivo");
        case 'number < 0' : printf("Temos um número negativo");
        default : printf("Esse número é 0");
        // o código está errado. LOL !
    }
}

/*
    EXERCÍCIO (N3) : Crie um programa que indica quantos segundo tem 'x' horas ! 
*/

#include <stdio.h>

int hours; 
long int seg;

main()
{
    printf("Digite a quant. de horas : ");
    scanf("%d", &hours);
    seg = hours * 3600;
    printf("%d tem %ld", hours, seg);
}