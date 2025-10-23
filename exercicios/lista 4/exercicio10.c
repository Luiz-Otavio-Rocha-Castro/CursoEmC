#include <stdio.h>
#include <stdlib.h>
/*
10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes.
*/
int main(){
    int i, j, matA[3][3], matB[3][3], matC[3][3];
    printf("MATRIZ - A\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero para a posicao %d,%d: ", i,j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\nMATRIZ - B\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero para a posicao %d,%d: ", i,j);
            scanf("%d", &matB[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    printf("MATRIZ - A\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d ", matA[i][j]);
        }
        printf("\n");
    }
     printf("MATRIZ - B\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d ", matB[i][j]);
        }
        printf("\n");
    }
     printf("MATRIZ - C\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d ", matC[i][j]);
        }
        printf("\n");
    }
}
