#include <stdio.h>
#include <stdlib.h>
/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.

*/
int main(){
    int i, vet[20],aux;
    for (i=0; i<20; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Vetor original: ");
    for (i=0; i<20; i++){
        printf("%d ", vet[i]);

    }
    int j = 19;
    for (i=0; i<10; i++){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        j--;

    }
    printf("\nVetor modificado: ");
    for (i=0; i<20; i++){
        printf("%d ", vet[i]);

    }
    printf("\n");

    return 0;
}

