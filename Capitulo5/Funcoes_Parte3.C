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


*/