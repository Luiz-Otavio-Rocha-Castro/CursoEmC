#include <stdio.h>
#include <stdlib.h>

int main(){
    //vamos aprender como alocar memoria de forma dinamica - veja com a funcao malloc
    int *pointer;
    //lembrando que esse funcao retornar um ponteiro, ou seja ela vai retonar um endereco de memoria
    pointer = malloc(sizeof(int));//A gente precisa passar a quantidade de bytes que vao ser usado nesse bloco
    //com isso a gente alocou uma memoria para um int e seu endereço ficou salvo no ponteiro;


    //A gente pode fazer a mesma coisa tambem usando calloc, mas ele precisa passar dois parametros
    //Sendo eles: a quantidade de bytes e a quantidade de elementos que iremos salvar na regiao;
    int *pointer2;
    pointer2 = calloc(1,sizeof(int));//Como eu so vou salvar um elemento inteiro no meu blaco, eu uso 1.

    return 0;
}
