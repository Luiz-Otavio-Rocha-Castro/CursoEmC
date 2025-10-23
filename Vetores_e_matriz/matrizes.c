#include <stdio.h>
#include <stdlib.h>

/*
    Matrizes ---- arrays bidimensionais
    -> conjunto de elemento do mesmo tipo!
    -> Possui linhas e colunas
    -> Assim como no vetor, a gente pode acessar seus elementos por
    meio do indice, nesse caso serao dois indice (o ponto de intersecao)
    ex:
    mat[1][0] = 4
    primeiro indice -> linha
    segundo indice -> coluna

*/
int main(){
    //Como criar uma matriz!
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    char mat2[2][3] = {'a', 'b', 'c', 'd', 'e', 'f'};
    /*
    exemplo de matriz:
               c0 c1 c2
    linha 0 -> 1  2  3
    linha 1 -> 4  5  6
    linha 2 _> 7  8  9
    */
    int i, j;
    //Como ler uma matriz pelo teclado!

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o valor %d %d : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    //Como imprimir uma matriz

    printf("\n\n");
    for (i = 0; i < 3; i++){
        printf("\t");
        for (j = 0; j < 3; j++)
            printf("%3d ", mat1[i][j]);
        printf("\n");
    }
    printf("\n\n");


    return 0;
}
