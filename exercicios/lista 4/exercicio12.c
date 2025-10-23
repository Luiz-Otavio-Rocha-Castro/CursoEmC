#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/
int main(){
    int mat[7][7], i, j;
    srand(time(NULL));
    for (i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
            mat[i][j] = rand();
        }
    }
    for (i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    j = 6;
    printf("\nOs valores da diagonal secundaria sao: ");
    for (i = 0; i< 7; i++){
        printf("%d ", mat[i][j - i]);
    }
    printf("\n");


}
