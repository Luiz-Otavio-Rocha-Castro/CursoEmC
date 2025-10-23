#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.
*/
int main(){
    int mat[4][4], i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            mat[i][j] = rand();
        }
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nOs valores abaixo da diagonal principal sao: ");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if(j<i){
                printf("%d ", mat[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");


}
