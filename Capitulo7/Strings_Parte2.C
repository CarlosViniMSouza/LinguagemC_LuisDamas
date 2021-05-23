/*
    Passagem de Strings para funções :

    Se dá pela mesma forma na passagem de vetores para funções, uma vez que qualquer
    string é sempre um vetor de caracteres;

    Principais funções para maniipulação de Strings :

    1 --> int strlen(char *s) --> Retorna o numero de caracateres existentes na string.

    2 --> int isnull(char *s) --> Retorna TRUE(se for string vazia), Retorna FALSE(se for string não-vazia)

    3 --> char *strcpy(char *det, char *origem) --> Copia a 'string *origem' e cola no lugar da 'string *det'

    4 --> char *strcat(char *det, char *origem) --> Cola a 'string *origem' no final da 'string *det'

    5 --> char strcountc(char *s, char ch) --> Devolve quantos 'ch' estão contidas na string s

    6 --> int strcountd(char *s) --> Devolve quantos dígitos existem na string s

    7 --> int indchr(char *s, char ch) --> //Não entendi muito bem o que acontece !! Sorry

    8 --> int strpal(char *s) --> Verifica se a string s é ou não Palindroma (retorn TRUE ou FALSE)

    9 --> char *strrev(char *s) --> Inverte a string s e retorna-a invertida ao mesmo tempo

    10 --> int strcmp(char *s1, char s2) --> Compara alfabeticamente as strings s1 e s2

    Retornando no formato de inteiros as seguintes respostas: 
    
        < 0 : s1 é alfabeticamente menos que s2
        0   : são iguais.
        > 0 : s1 é alfabeticamente maior que s2

    11 --> char *strpad(char *s) --> Coloca um <ESPACE> entre cada caractere da string

    12 --> char *strdelc(char *s, char ch) --> Remove todas as 'ch' da string s

    // Na proxima lição, iniciaremos o estudo dos Ponteiros - Capítulo 8

*/