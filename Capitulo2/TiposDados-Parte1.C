/*
    Variáveis :

    int num1; --> num1 é uma variavel do tipo 'inteiro'
    char ch1; --> ch1 é uma variável do tipo 'charactere'/letra
    float pi, raio, perimetro; --> números com '.' (3.1415 e 2*r*3.1415 e 2*3.1415*r^2)
    double total; // mesma definião do float, mas com outras características

    Operações com Inteiros :

    | > 21 + 4 -> 25 (Soma)
    | > 21 - 4 -> 17 (Subtração)
    | > 21 * 4 -> 84 (Multiplicação)
    | > 21 / 4 -> 5 (Divisão Inteira)
    | > 21 / 4 -> 1 (Resto da Divisão)

    NOTA1 : Operações com num. inteiros SEMPRE retorna num. inteiros

    NOTA2 : O Formato de Escrita de um inteiro é '%d' !

    Exemplo :
*/

#include <stdio.h>

int num1 = 129;
main()
{
    printf("Num1 é : %d, e seu sucessor é %d\n", num1, num1+1);
}

// assim como temos o printf (para escrever valores), temos uma função para ler os 
// valores, que no caso é o scanf() :

#include <stdio.h>

int num2;
main()
{
    printf("Digite qualquer num. interio : ");
    scanf("%d", &num2);
    printf("Seu inteiro é : %d", num2);
}

// Para ler int, float, double e char deve-se usar o '&' e depois o nome da variavel
// A única exceção é a string; que deve ser formatada de outra forma !

/*
    Interios e Variações :

    Podendo ter valores de 2 ou 4 bytes, a linguagem dispõe de uma função chamada
    sizeof(). Dependendo da máquina que executar o código abaixo, teremos 2 respostas:
*/

#include <stdio.h>

int n;
main()
{
    printf("O tamanho de um inteiro é : %d", sizeof(n));
}

// O mesmo é válido para char, float, double;

#include <stdio.h>

char c;
float f;
double d;
main()
{
    printf("O tamanho de 1 char, 1 float e 1 char são respecticvamente : %c, %f, %d", sizeof(c), sizeof(f), sizeof(d));
}

/*
    Exitem 4 tipos de inteiros que podemos usar para definir o tamanho de memória ocupada
    pela variável em qualquer máquina :

    1 - short : pequeno int (2 bytes)
    2 - long : grande int (4 bytes)
    3 - unsigned : inteiro com sinal de posi. e nega.
    4 - signed : inteiro sem sinal (apenas posi.)

    E para usarmos esses prefixos no programa, fazemos da seguinte forma :
*/

#include <stdio.h>

short int n1;
long int n2;

main()
{
    printf("Espaço de memória ocupada por short e long : %hd e %ld", sizeof(n1), sizeof(n2));
}

/* NOTA3 : em printf() e scanf(), em int's especfícos, usamos h(short) e l(long) !

    Quanto a signed e unsigned -> signed não é necessário ser declarado, e o unsigned é
declarado da mesma forma que short e long (com uma pequena diferença) :

    --> Para dizer que temos um 'unsigned int <var>' no código, trocamos '%d' por '%u'
*/

#include <stdio.h>

unsigned int Id;
main()
{
    printf("Espaço de memória ocupada por short e long : %u", sizeof(Id));
}

// Amanhã continuamos em Reais - Float e Double