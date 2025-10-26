#include <stdio.h>
#include <stdlib.h>

/*
    Fun��es Recursivas - Fun��es que chama ela mesma
    exemplos: imprimir todos os numeros de n ate 0
*/

//Na recursiva eu preciso ter um ponto de parada!!!
void imprimir(int x){
    //Qual eh o ponto de parada? Quando chegar em 0
    if (x == 0)
        printf("%d ", x);
    //Todo processo recursivo precisa resolver uma pequena parte do processo e depois chamar um instancia menor
    else{
        printf("%d ", x);
        imprimir(--x);
        /*
        Como eu quero chegar ate zero, eu chamo minha fun��o novamente, porem decrementando o x, ate que o
        x atinja nossa parada

        obs: Se tiver alguma linha de execu��o abaixo da chamada, o pc vai tirar uma "foto" do que ainda falta fazer
        e guarda ela em uma especie de pilha, na hora que x atingir a condi��o de parada, o pc vai voltar fazendo
        todas essas atividades que ficaram pendentes
        */


    }
    //Todo processo � desempilhado
}

int main(){
    int n;
    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);
    imprimir(n);
    return 0;
}
