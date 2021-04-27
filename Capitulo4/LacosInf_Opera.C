/*
    Laços Infinitos :

    São 'laços infinitos' aqueles que nunca terminam ( LOL ! :} )
    Em outras palavras : Quando o laço não possui uma <condição> específica,
está é substituída pela condição TRUE
    Veja um exemplo para processar menus :
*/

#include <stdio.h>

int opcao;
main(){
    while (1)
    {
        /*Apresentar o Menu
          Ler a Opção
        */
        if(opcao == 1)
            printf("Seu pedido foi aceito");
        else if (opcao == 2)
            printf("Seu pedido foi aceito");
        else if (opcao == 3)
            printf("Seu pedido foi aceito");
        else
            printf("Pedido recusado");
        break;
            
    }
    
}

/*
    Operadores ++ e -- :

    A linguagem C apresenta 2 operadores unários que permitem incrementação e decrementação
de uma variável (não podendo ser usado em constantes !). A tabela abaixo explica melhor :

    Operador    Siginificado    Exemplos
       ++     Incremento de 1   i++, ++j
       ++       x++ ou ++x      x = x + 1
       --     Decremento de 1   k--, --l
       --       y-- ou --y      y = y - 1

    O exemplo abaixo será explicará com mais clareza a funcionalidade disso :
*/

#include <stdio.h>

int i = 1;
main(){
    while(i <= 10){
        printf("%d \n", i);
        i++;
    }
}

/*
    Diferença entre ++x e x++ :

    y = x++ --> O que acontece(em sequência):   |    y = ++x --> O que acontece(em sequência):
                                                |
    1 - x é atribuído a y;                      |    1 - o valor de x é incrementado;
    2 - o valor de x é incrementado;            |    2 - x é atribuído a y;
*/