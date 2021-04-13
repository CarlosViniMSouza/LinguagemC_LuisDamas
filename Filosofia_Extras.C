/*

    Filosofia da Programação em C

Segue o fluxograma para melhor entendimento da filosofia desta linguagem :

Gestão : {
    Clientes : {
        Apagar Cliente;
        Alterar Cliente;
        Inserir Cliente;
        Validar Cliente;
    }
    Fornecedores : {
        Apagar Fornecedor;
        Alterar Fornecedor;
        Inserir Fornecedor;
        Validar Fornecedor;
    }
    Faturas : {
        Apagar Fatura;
        Alterar Fatura;
        Inserir Fatura;
        Validar Fatura;
    }
    Contas : {
        Apagar Conta;
        Alterar Conta;
        Inserir Conta;
        Validar Conta;
    }
    (etc);
}

    C versus C++

Popularmente conhecido como 'C com classes', o C++ é um 'Superset' da linguagem C, tanto
é que se originou da masma linguagem (contendo todas as características de sua liguagem-mãe
e características próprias). Além do que, é possível compilar arquivos no formato '.c' em
um compilador do C++

    Ciclo de Desenvolvimento de uma Aplicação

    1. Edição do Código Fonte

    Essa fase é ocupação do programador que irá escrever o código no formato '.c'

    2. Compilação do Programa
    
    Essa fase é feita pelo Compilador, que ao executar a compilação do 'programa.c', poderá
identificar erro de sintaxe, problemas no processamento do código, ou apenas terminar a 
compilação e criar um 'objeto.obj' (em DOS).

Para compilar um programa na linha de comando, segue os exemplos :

    Turbo C (Borland) : $ tcc prog1.c
    Borland C (Borland) : $ bcc prog1.c
    Microsoft C (Microsoft) : $ c1 prog1.c
    Ambiente Unix : $ cc prog1.c
                    (para criar o objeto.c, usaremos o '-c')
                    $ cc -c prog1.c

    3. Linkando os objetos

    Serve para verificar a sintaxe e criar o objeto.c (de onde virá o executável).
Permitindo assim a junção em um único executável 'arquivos objeto' originados em outras 
linguagens.

    Para criar o arquivo executavel com nome diferente de prog1.c, deve-se usar a opção'-o'
acompanhada do novo nome do arquivo.

    $ cc prog1.c -o prog2

    4. Execução do Programa

    Se o procedimento de linkagem tiver tido exito, teremos um executável, e para executá-lo,
digitamos o seu nome :

    $ prog2

    Caso o programa não tenha feito o que se esperava, é porque o programador cometeu algum 
erro na produção. E logo, terá que fazer as correções necessárias.
*/