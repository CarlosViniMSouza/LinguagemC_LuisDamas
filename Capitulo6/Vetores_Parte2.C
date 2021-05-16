/*
    Passagem de Vetores em Funções :

    Vamos a um exemplo prático disso:

    void init_n1(int s1[10]){
        int i;
        for(i=0; i<10; i++)
        s1[i]=0;
    } 

    void init_n2(int s2[20]){
        int i;
        for(i=0; i<10; i++)
            s2[i]=0;
    }

    main(){
        int a[10];
        int b[20];

        init_n1(a);     //iniciar o vetor 'a' usando init_n1()
        init_n2(b);     //iniciar o vetor 'b' usando init_n2()
    }

    Porem, é possível reescrever o programa acima sem declarar a quant.
    de elementos existentes ali dentro. Ainda sim, é necessário passar essa
    informação na função main() :

    void init(int s1[], int s2[]){
        int i;
        for(i=0; i<10; i++)
            s[i]=0;
            n[i]=1;
    }

    main(){
        int a[10];
        int b[20];

        init(a, 10);
        init(b, 20);
    }

    Definição de Constantes :

    NOTA (N1) : As constantes devem ser declaradas fora das funções, de forma que
    fiquem visiveis para todo o código. E existem 2 formas de declarar uma constante:

    1 - escrevendo a palavra 'const': const <type> <variavel> = <conteudo>;
    2 - com a diretiva de pré-processamento: #define <variavel> <conteudo>;

    Vejamos um exemplo disso:
*/

#include <stdio.h>

const int number = 10; //ou #define number 10;

void init(int s[]){
    int i;
    for (i = 0; i < number; i++){
        s[i] = 0;
    }
}

main(){
    int i, v[number];
    init(v);

    for (i = 0; i < number; i++){
        v[i] = 0;
    }
}

/*
    NOTA (N2) : As constantes definidas por #define são conhecidas como Constantes Simbolicas;

    NOTA (N3) : Dica -> Muitos programadores colocam as Constantes Simbolicas em Maiusculas;

    Matrizes e Vetores Multidimensionais :

*/