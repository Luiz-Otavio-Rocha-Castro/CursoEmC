#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    /*
        O q sao funcoes e procedimento?

        A caracteristica principal de uma função eh retornar um valor!!!
        Funcoes e procedimentos tbm tem seus identificadores:
        identificador(parametros)

        Procedimentos nao tem retorno, essa e a principal diferença entre ele e funcão

        Pq usar funcoes?
        -> A gente pode usar ela varias vezes, sem deixar o nosso codigo redunte, ja imaginou se para todo
        printf, voce precissase escrever muitas linhas de codigo?
    */

//Vamos criar uma funcao que retorna o tam da string
//Ela sempre eh criada fora do main

//tipo de retorno -> indetificador -> parametros{}
int minhaStrLen(char str[]){
//As mesmas patraticas de identificador de variavel, vai ser usada aqui
    int tam = 0;
    while(str[tam] != '\0'){
        tam++;
    }
    return tam;

}
int main(/*Parametros*/){//Aqui tbm eh nossa funcao, porem ela e principal e sempre tem como padrao o nome main, pois o computador sempre vai começar a executar por ela
    int tam;
    char vet[20] = {"Ola mundo!"};
    printf("%d\n", strlen(vet));
    printf("%d\n", minhaStrLen(vet));

    return 0;//Retorno para o sistema op
}
//Tudo da funçao fica dentro das chaves
//Toda função tem seu tipo!!!
