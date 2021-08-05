cmake_minimum_required(VERSION 3.20)
project(LinguagemC_LuisDamas)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Capitulo1)
include_directories(Capitulo2)
include_directories(Capitulo3)
include_directories(Capitulo4)
include_directories(Capitulo5)
include_directories(Capitulo6)
include_directories(Capitulo7)

add_executable(LinguagemC_LuisDamas
        .idea/.gitignore
        .idea/LinguagemC_LuisDamas.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        Capitulo1/MeuPrimeiroProg.C
        Capitulo1/Tarefa.C
        Capitulo2/Tarefa.C
        Capitulo2/TiposDados-Parte1.C
        Capitulo2/TiposDados-Parte2.C
        Capitulo3/Testes_E_Condicoes_Parte1.C
        Capitulo3/Testes_E_Condicoes_Parte2.C
        Capitulo3/Testes_E_Condicoes_Parte3.C
        Capitulo4/Lacos-Parte1.C
        Capitulo4/Lacos-Parte2.C
        Capitulo4/Lacos-Parte3.C
        Capitulo4/LacosInf_Opera.C
        Capitulo5/Funcoes_Parte1.C
        Capitulo5/Funcoes_Parte2.C
        Capitulo5/Funcoes_Parte3.C
        Capitulo6/Vetores_Parte1.C
        Capitulo6/Vetores_Parte2.C
        Capitulo6/Vetores_Parte3.C
        Capitulo7/Strings_Parte1.C
        Capitulo7/Strings_Parte2.C
        Filosofia_Extras.C
        Introducao.C)
