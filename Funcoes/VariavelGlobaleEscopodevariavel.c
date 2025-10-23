#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*/
int idade2 = 35;//Aqui eh uma variavel global, vai existir em qualquer lugar do nosso codigo!!!
//qual alteração que voce fizer nela, vai ser aplicada em toodo lugar do seu codigo, por isso, tome um pouco de cuidado


void imprimir(int id){
    printf("\nIdade: %d\n", id);
    //O mesmo caso vale para as funcoes auxiliares ou seja a declaração da variavel id, so vai funcionar
    //aqui na função imprimir, caso eu tente usar ela na função principal main, vai dar um erro
       printf("\nIdade: %d\n", idade2);//Nesse caso eu vou conseguir imprimir idade2
}


int main(){
    int idade = 25;
    //Variaveis criadas dentro de funções sao chamadas de variaveis locais, pois ela so funciona aqui;
    //Portanto o escopo da variavel idade so existe aqui em main
    printf("\nIdade: %d\n", idade);
    printf("\nIdade: %d\n", idade2);//Nesse caso eu vou conseguir imprimir idade2
    imprimir(idade);
    return 0;
}

