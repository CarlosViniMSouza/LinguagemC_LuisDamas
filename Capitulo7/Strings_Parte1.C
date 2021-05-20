/*
    O que são Strings? :

    Uma string nada mais é do que um conjunto de caracteres armazenados dentro de um vetor;

    --> São representadas usando " "; enquanto caracteres são representados usando ' ';

    Exemplos: "Carlos", "Eng. Software", "O rato roeu a roupa do Rei de Roma"; (Strings)

    Exemplos: 'C'; '?'; '5'; (Caracteres)

    NOTA (N1): Como em C as strings não são um tipo básico, a única de forma de representar uma string
    é recorrendo a um vetor de caracteres;

    NOTA (N2): Nem sempre um vetor de caracteres pode ser uma string;

    Carga Inicial Automática de Strings :

    char nome[20] = "Carlos Souza";
    char nome[] = "Carlos Souza";   // aqui dizemos nome[20 + 1] --> esse 1 é para o '\0'
    char nome[20] = {'C', 'a', 'r', 'l', 'o', 's', '', 'S', 'o', 'u', 'z', 'a'};
    char *nome = "Carlos Souza";    // semelhante ao 'char nome[]'

    NOTA (N3): O '\0' é o caractere especial de finalização --> no fim da string haverá o '\0'

    Leitura e Escrita de Strings :

    A escrita é realizada por 2 funções já bem conhecidas: printf e puts;

        Função printf():

        printf(" hello world!");    // aqui ele imprime a string;

        char nome[15] = "Carlos";
        char sobrenome[15] = "Souza";
        printf("Seu nome eh: %s %s \n", nome, sobrenome);

        Função puts() --> (put string):

        NOTA (N3): Essa função imprime a string, e logo em seguida aplica um '\O' no final da operação;

        puts("Carlos Souza"); == printf("Carlos Souza\0");

        Função scanf():

        Aqui é permitido usar %s para declaração de Strings, porém, o caractere & não deve ser inserido;

        Vejamos um Exemplo para melhor entendermos:

        EXEMPLO (N1): Escreva um programa que pede nome, idade e endereço, e que logo em seguida, imprima
        essas mesmas informações (preferencialmente 1 em cada linha).
*/

#include <stdio.h>

char nome[76];
int id;
char ip[151];

main(){
    printf("Seu nome completo: "); scanf("%s", nome);
    printf("\nSua idade: "); scanf("%i", &id);
    printf("\nSeu endereço (Bairro, Cidade): "); scanf("%s", ip);

    printf("Bem, suas informações são: %s \n %i \n %s", nome, id, ip);
}

/*
    Função get (get string):

    Realiza a mesma funcionalidade do scanf(), porem, não se limita a leitura de uma única palavra;

    Façamos a resolução do exemplo anterior, mas de outra forma: 
*/

#include <stdio.h>

char nome[76];

main(){
    printf("digite seu nome: "); gets(nome);
    puts(nome);
}

// Na proxima parte veremos: Passagem de Strings para funções.