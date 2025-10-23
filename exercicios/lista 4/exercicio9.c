#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.

*/

int main(){
    int i,j, mat[5][10], vetlinha[5] = {0}, vetcol[10] = {0};
    srand(time(NULL));
    //recebe valores e soma linhas
    for (i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = rand();
            vetlinha[i] +=  mat[i][j];
        }
    }
    //soma coluna
    for (j = 0; j < 10; j++){
        for(i = 0; i< 5; i++){
            vetcol[j] +=  mat[i][j];
        }
    }
    //imprime matriz
    for (i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
           printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("A soma da linha %d: %d\n", i, vetlinha[i]);
    }
    printf("\n");
     for(j = 0; j < 10; j++){
        printf("A soma da coluna %d: %d\n", j, vetcol[j]);
    }

    return 0;
}



