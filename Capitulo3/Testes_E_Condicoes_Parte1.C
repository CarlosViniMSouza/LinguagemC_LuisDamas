/*
    NOTA (N1) : Em C, não há nenhum tipo de dado específico para guardar valores lógicos.
    NOTA (N2) : Em C, o valor FALSE é representado pelo valor 0.
    NOTA (N3) : Portanto, qualquer (valor != 0) é considerado TRUE.

    Operadores Relacionais :

    Operador        Nome            Exemplo
       ==         Igualdade         a == b
       >          Maior que         a > b
       >=     Maior ou igual que    a >= b
       <          Menor que         a < b
       <=     Menor ou igual que    a <= b
       !=        Diferente de       a != b

    NOTA (N4) : Expressões com operadores relacionais sempre devolvem como resposta :
                ° 1 - TRUE
                ° 2 - FALSE

    PROBLEMA RESOLVIDO (N1) : Crie um programa que solicite 2 inteiros do usuário, e em
    seguida, aplique todos as operações relacionais com os mesmos 2 inteiros inseridos.
*/

#include <stdio.h>

int num1, num2;
main()
{
    printf("Coloque 2 numeros inteiros : ");
    scanf("%d %d", &num1, &num2);
    printf("%d == %d tem como resultado : %d", num1, num2, num1 == num2);
    printf("%d > %d tem como resultado : %d", num1, num2, num1 > num2);
    printf("%d >= %d tem como resultado : %d", num1, num2, num1 >= num2);
    printf("%d < %d tem como resultado : %d", num1, num2, num1 < num2);
    printf("%d <= %d tem como resultado : %d", num1, num2, num1 <= num2);
    printf("%d != %d tem como resultado : %d", num1, num2, num1 != num2);
}

/*
    if-else :

    Estrutura clássica do Controle de Fluxo, utilizado para indicar que caminho a 
aplicação deverá seguir dependendo das circunstâncias.
    Sua sintaxe pode ser descrita como :

    if (condição) {
        [instrução 1]
    } else {
        [instrução 2]
    }

    Seu funcionamento :

    ° 1 - Caso a 'condição' seja verdadeira, o programa executa 'instrução 1'
    ° 2 - Caso contrário, ignora a 'instrução 1' e vai para a 'instrução 2'

    NOTA (N5) : as condições devem estar contidas em '()' e no final com o ';' 

    PROBLEMA RESOLVIDO (N2) : Crie um programa que indica se o numero inserido
    é positivo (>= 0) ou negativo.
*/

#include <stdio.h>

float num;
main()
{
    printf("Insira um numero qualquer : ");
    scanf("%f", &num);
    if (num >= 0.0) {
        printf("Temos aqui um numero positivo");
    } else {
        printf("Temos aqui um numero negativo");
    }
}

/*
    NOTA (N6) : Um programador deve escrever o código de forma que, de forma rápida e 
    simples, outras pessoas possam entende-lo (MEGA-DICA para os dev's :) )

    PROBLEMA RESOLVIDO (N3) : Crie um programa que calcule 3 resultados :
    1 - Salario Bruto; 
    2 - Salario Liquido;
    3 - Imposto;

    Seguindo a tabela abaixo :

        Salario         Taxa
         x<1000           5%
      1000<=x<5000       11%
         x>=5000         35%
*/

#include <stdio.h>

float salario1, salario2, imposto;
main()
{
    //salario1 = Salario Bruto;
    //salario2 = Salario Liquido;
    printf("Digite aqui o seu salario total: ");
    scanf("%f", &salario1);
    if(salario1 < 1000.0){
        imposto = salario1*0.05;
        salario2 = salario1 - imposto;
        printf("Seu salario bruto é : %f", salario1)
        printf("Seu salario liquido é : %f", salario2);
        printf("Você vai pagar %f de imposto !", imposto);
    } else if (1000.0 < salario1 <= 5000.0){
        imposto = salario1*0.11;
        salario2 = salario1 - imposto;
        printf("Seu salario bruto é : %f", salario1)
        printf("Seu salario liquido é : %f", salario2);
        printf("Você vai pagar %f de imposto !", imposto);
    } else if (salario1 >= 5000.0){
        imposto = salario1*0.35;
        salario2 = salario1 - imposto;
        printf("Seu salario bruto é : %f", salario1)
        printf("Seu salario liquido é : %f", salario2);
        printf("Você vai pagar %f de imposto !", imposto);
    }
    
}

// Logo mais veremos Operadores Lógicos !