#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/


int main(){
    int i, j, mat[5][7], soma = 0;
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        for (j = 0; j < 7; j++){
            mat[i][j] = rand() % 101;
            soma +=  mat[i][j];
        }
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 7; j++){
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("A soma de todos os elementos da matriz eh: %d\n", soma);
    return 0;
}
