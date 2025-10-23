#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Vamos criar um procedimento para imprimir uma matriz e uma função que some uma linha da matriz e outra função para somar uma coluna

*/

int tam = 5;//Como estamos fazendo uma matriz 5 x 5, criei uma variavel global, para usar em todas as minhas funções e nos meus procedimentos
//outra coisa bem interessante que podemos fazer, eh declarar nossa matriz como algo global, ja que vamos precisar dela em todos o lugares
int matriz[5][5];

//Como vamos criar um PROCEDIMENTO, sabemos que ele não vai retornar nada!!
void ImprimeMatriz(){
    int linha, coluna;
    for(linha = 0; linha < tam; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("%3d ", matriz[linha][coluna]);
        }
        printf("\n");
    }


}
int Somalinha(int i){
    int j, soma = 0;
    for(j = 0; j < tam; j++){
        soma += matriz[i][j];
    }
    return soma;
}
int SomaColuna(int j){
    int i, soma = 0;
    for(i = 0; i < tam; i++){
        soma += matriz[i][j];
    }
    return soma;
}


int main(){
    int i,j;
    srand(time(NULL));
    for (i = 0; i< tam; i++){
        for (j = 0; j< tam; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    printf("Qual linha e coluna voce deseja somar, 0,1,2,3 ou 4? ");
    scanf("%d%d", &i, &j);

    ImprimeMatriz();
    printf("\nA soma da linha que você escolheu eh: %d\n", Somalinha(i));
    printf("\nA soma da coluna que você escolheu eh: %d\n", SomaColuna(j));


    return 0;
}
//Perceba que, como eu declarei minha matriz globalmente, ela nao precisa ser passada como parametro, em nenhuma vez!!!
