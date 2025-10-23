#include <stdio.h>
#include <stdlib.h>
/*
15) Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.
*/

int main(){
    int i,j, mat[4][4];
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Informe o numero da posicao %d,%d: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    int somalinha[4] = {0}, somacol[4] = {0}, diagonalP = 0, diagonalS = 0;
    //linha
    for(i = 0; i < 4; i++ ){
        for (j = 0; j < 4; j++){
            somalinha[i] += mat[i][j];
        }
    }
    //coluna
    for(i = 0; i < 4; i++ ){
        for (j = 0; j < 4; j++){
            somacol[i] += mat[j][i];
        }
    }
    //diagonalprincipal
    for (i = 0; i < 4; i++){
        diagonalP += mat[i][i];
    }
    //diagonalsecundaria
    j = 3;
    for (i = 0; i < 4; i++){
        diagonalS += mat[i][j-i];
    }
    //mostrar matriz
    printf("\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    //mostra resultado das somas
    printf("\nSoma de cada linha:\n");
    for (i = 0; i<4; i++){
        printf("Linha %d: %d ", i, somalinha[i]);
    }
    printf("\n\nSoma de cada coluna:\n");
    for (i = 0; i<4; i++){
        printf("Colunha %d: %d ", i, somacol[i]);
    }
    printf("\n\nSoma da diagonal principal: %d\nSoma da diagonal secundaria: %d\n", diagonalP, diagonalS);

    //Informe se eh um quadrado magico:
    int aux, cont = 0, cont2 = 0;
    for (i = 0; i<4; i++){
        if (i==0){
            aux = somalinha[i];
       }
       else if(somalinha [i] == aux){
            cont+=1;
       }
    }
    for (i = 0; i<4; i++){
        if (i==0){
            aux = somacol[i];
       }
       else if(somacol[i] == aux){
            cont2+=1;
       }
    }
    if (cont == 3 && cont2 == 3 && somacol[1] == diagonalP && diagonalP == diagonalS){
        printf("\nA matriz eh um quadrado magico!!!\n");
    }
    else{
        printf("\nNao eh um quadrado magico!!!\n");
    }
    return 0;
}
