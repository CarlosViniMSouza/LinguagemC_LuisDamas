/*
    Funções e Procedimentos :

    NOTA (N1) : Uma função pode ter sempre um valor e um tipo de retorno associados,
enquanto precedimentos não devolvem qualquer valor;

    Podemos dar 2 exemplos de Funções e Procedimentos :

    Funções : int max(int n1, int n2) -> verifica quem é maior;
    Procedimentos : linha() -> não devolve nada no final;

    NOTA (N2) : Sempre que no cabeçalho da função não recebe o tipo, este é substituído
pelo 'int' !

    O tipo "void" :

    Em C, existe um tipo de função denominada 'void' (não retorna nenhum valor) :

    Vejamos um exemplo :
*/

#include <stdio.h>

void line(int num1, char letra){
    int i;
    for (i = 0; i <= num1; i++){
        putchar(letra);
    putchar('\n');
    }
}

main(){
    line(3, '+');
    line(4, '-');
    line(5, '*');
    line(6, '/');
}

/*
    Variaveis Locais :

    NOTA (N1) : As variaveis declaradas dentro de uma função, só são conhecidas por aquela
função (ou seja, tentar manipular essas variaveis em outra parte do código não é possível) !

    Isso deve ocorrer dentro de qualquer função antes da intrução;
    Ex.:

    function(...){
        <declarar-variaveis>

        <instruções>
    }

    NOTA (N2) : Após a execução do programa, as variáveis locais são deletadas.

    NOTA (N3) : Sempre tente recorrer as variaveis locais - para melhor gerenciamento
    de sua aplicação.

    Considerações Finais :

    Bem, muitas das vezes, funções são mal elaboradas da Linguagem C, por conta do simples
    fato de não haver um valor pré-estabelecido aos booleanos TRUE e FALSE. Veja o exemplo abaixo:

    PROBLEMA RESOLVIDO (N1) : Crie um programa que verifique se 2 nums inteiros são equivalentes;

*/

#include <stdio.h>

int n1, n2;

int compare(int n1, int n2){
    if (n1 == n2){
        return true;
    } else {
        return false;
    }
}

main(){
    printf("Digite 2 valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    compare(n1, n2);
}