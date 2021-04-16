/*
    Reais - Floaat e Double 

    Tanto um quanto o outro armazenam números fracionados (decimais), a diferença entre
ambos é que o float ocupa 4 bytes, enquanto double ocupa 8 bytes de espaço.

 Exemplo (N1) : Crie um programa que calcule o perimetro e a area do círculo
*/

#include <stdio.h>

float Pi = 3.14;
float raio;
double perimetro, area;

main()
{
    printf("Entre com o valor do raio : ");
    scanf("%f", &raio);
    perimetro = 2 * Pi * raio;
    area = Pi * raio * raio;
    printf("O perimetro e a area do círculo são respectivamente : %f e %f", perimetro, area);
}

/* Na formatação escrita, float e double são escritos como %f;

    Operações possíveis com floats e doubles :

    Soma :          | 22.5 + 4.5 = 27.0
    Subtração :     | 22.5 - 4.5 = 18.0
    Multiplicação : | 22.5 * 4.5 = 101.25
    Divisão :       | 22.5 / 4.5 = 5.0

    'Resto de Divisão'(%) não é aplicável aqui !
*/

/*
    Caracteres - char

    Lembrando a diferença entre Char e String :

    ° Char = j // armazena UM ÚNICO CARACTERE
    ° String = jabuticaba // armazena uma cadeia de caracteres

    NOTA = para representar um caractere, usamos '' e não "";

    Siga o exemplo abaixo :
*/

#include <stdio.h>

main()
{
    printf("%cell%c %corl%c", 'H', 'o', 'W', 'd');
}

/*
    para facilitar a leitura de caracteres, temos a nossa disposição uma função
específica para esse tipó de situação : o getchar() ! Veja o exemplo :
*/

#include <stdio.h>

char letra;
main()
{
    printf("Digite uma letra qualquer : ");
    getchar();
    printf("O caractere escrito foi : '%c'", letra);
}

// NOTA : O programa abaixo tem um detalhe interesante a ser pesquisado depois :

#include <stdio.h>

char letra1, letra2;
main()
{
    printf("Digite uma letra, dê <ESPACO>, e insira outra letra : ");
    scanf("%c", &letra1);
    scanf(" %c", &letra2);
    printf("Os caracteres digitados foram : '%c' e '%c'", letra1, letra2);
}

/*
    Existe uma correlação entre caracteres e inteiros, o ASCII, podemos explorar isso
no programa abaixo (tentarei explicar da melhor forma depois) :
*/

#include <stdio.h>

int num_asc;
main()
{
    printf("Digite um num entre 0 e 255 : ");
    scanf("%d", &num_esc);
    printf("Segundo ASCII, o numero %d equivale a letra '%c'", num_esc, (char) num_esc);
}

/*
    NOTAS :
    I -> o uso do scanf() com formatos de leitura desadequados pode comprometer o programa
ou até gerar erros dificeis de detectar
    II -> Os programas-exemplo tiveram esses 'pequenos' problemas, e esse tipo de situação
é valida para a todos os tipos de dados (char, int, float, double)
*/