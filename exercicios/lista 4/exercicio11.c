#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/
int main(){
    int mat[5][5], i, j;
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            mat[i][j] = rand();
        }
    }
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nOs valores da diagonal principal sao: ");
    for (i = 0; i < 5; i++){
       printf("%d ", mat[i][i]);
    }
    printf("\n");


}
