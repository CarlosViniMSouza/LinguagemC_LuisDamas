/*
    Funções propriamente ditas :

    Bem, funções são trechos de código destinados a executar uma tarefa específica dentro do nosso código,]
e que só irá executar tal funcionalidade quando invocada (geralmente na função main(), que é uma das 
principais funções-chave da Linguaguem).

    Quase tudo que usamos na criação de códigos em C se baseia em funções (vamos explicar
com mais detalhes logo a seguir).

    NOTA (N1) : Todo código em C deve ter a função main() em sua estrutura, pouco importando
o número de funções existentes.

    NOTA (N2) : As variáveis contidas em um Bloco são conhecidas apenas dentre desse Bloco,
pois fora do mesmo, a variável se torna desconhecida.

    E, é importantes deixar algumas coisas esclarecidas á respeito da utilização de 'Funções' :

    1 -> Cada função DEVE ter um nome específico para UMA ÚNICA tarefa específica;
    2 -> O código da função deve ser o MAIS genérico e MAIS independente de outras funções;
    3 -> Uma função pode ser chamada por outras funções;
    4 -> Uma função pode receber parâmetros de forma a simplificar sua atuação;
    5 -> E uma função pode retornar um resultado de seu trabalho á entidade que a convocou;

    PROBLEMA RESOLVIDO (N1) : Escreva um programa (com até 4 funções), que dê esse retorno :

    ***
    *****
    *******
    *****
    ***
*/

#include <stdio.h>

int x;

int linha3c() {
    for(x = 1; x <= 3; x++){
        putchar('*'); // putchar('') = printf("")
        // vai digitar : *** (e depois pula para próxima linha)
    }
}

int linha5c() {
    for(x = 1; x <= 5; x++){
        putchar('*');
        // vai digitar : ***** (e depois pula para próxima linha)
    }
}

int linha7c() {
    for(x = 1; x <= 7; x++){
        putchar('*');
        // vai digitar : ******* (e depois pula para próxima linha)
    }
}

main(){
    linha3c();
    linha5c();
    linha7c();
    linha5c();
    linha3c();
    // aqui vai sair o resultado exigido da questão !
}

/*
    Parâmetros :

    Os parâmetros servem para simplificar o trabalhos das funções, isso é claro, quando passamos o tipo
do parâmetro na função para evitar conflitos quanto ao tipo de dado enviado a função. E, os parâmetros são
separados por ',' ! Veja o exemplo abaixo :

    FuncaoTal(int i, float j, char k){
        <instrução>
    }

    
*/